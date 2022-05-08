#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "project/racetrack.h"
#include "sensor_msgs/LaserScan.h"

ros::Publisher pub;
//int i, k, sector;
//float d_th, speed, max_speed, min_speed, ang_vel, lin_vel;
//double left[720], right[720], center[720];
float d_th = 3.0; //threshold distance for safety
float speed = 0; //initial speed
float max_speed = 10.0; //setting max speed
float min_speed = 0; //setting min speed
float ang_vel = 1.0; //angular velocity during curves 
float lin_vel = 0.5; //linear velocity during turns

bool control (project::racetrack::Request &req, project::racetrack::Response &res)
{  // apply reading conditions
   // condition for speed increase
   if(req.controller == 'w' && speed < max_speed)
   {
       speed = speed + 1.0;
       }
   // condition for speed decrease
   else if(req.controller == 's' && speed > min_speed)
   { 
       speed = speed - 1.0;
       }
      
   // output
   res.speed = speed;
    return 1;   
}
  
double distance( double scan[], int size ) 
{  
  double min_dist = 50;
  for (int i=0; i < size; i++)
  {
      if(scan[i] < min_dist)
      { min_dist = scan[i]; }
      }
      return min_dist;
}      

void decidedirection( const sensor_msgs::LaserScan::ConstPtr &msg )
{ 

  geometry_msgs::Twist my_vel;
  
  float scan[msg->ranges.size()]; 
  
  for(int k = 0; k < msg->ranges.size(); k++)
  { scan[k] = msg->ranges[k];}
  
  //dividing the laserscan into three sectors: left, center, right
  
  int sector = (msg->ranges.size())/3;
  double left[sector];
  double center[sector];
  double right[sector];
   
   for(int i = 0; i < sector; i++)
   {
    left[i] = scan[i + 2*sector];
    center[i] = scan[i + sector];
    right[i] = scan[i]; 
   }
   
   if ( distance(center, sector) < d_th) //conditons of turning left or right when robot comes close to obstacle
   {   
      if( distance(left, sector) < distance(right, sector))
      { 
         my_vel.linear.x = speed * lin_vel;
         my_vel.angular.z = -1 * ang_vel * speed;
      }
         
      else
      { 
         my_vel.linear.x = lin_vel * speed;
         my_vel.angular.z = ang_vel * speed;
      }
   }
   
   else
   { my_vel.linear.x = speed * lin_vel;} // robot moves straight
   
   pub.publish(my_vel);

}

int main(int argc, char **argv)
{  
   ros::init(argc, argv, "controller");
   ros::NodeHandle nh;
   ros::Subscriber sub = nh.subscribe("/base_scan", 50, decidedirection);  
   ros::ServiceServer racetrack = nh.advertiseService("/racetrack", control);
   pub = nh.advertise<geometry_msgs::Twist> ("/cmd_vel", 1);
   
   ros::spin();
   return 0;
   }

