

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "project/racetrack.h"
#include "stdio.h"
#include "std_msgs/String.h"

float speed = 0.0;
float y;

int main (int argc, char **argv)
{
 
ros::init(argc, argv,"program");
ros::NodeHandle nh;

ros::ServiceClient client1 = nh.serviceClient<project::racetrack>("/racetrack");

project::racetrack server1;

printf( " PRESS : w to increase speed (max speed 10\n PRESS : s to decrease speed. \n");
printf( "current speed: %f \n", speed);

char button;

while (ros::ok())
{  
  scanf("%c", &button);
  
  if(button == 'w')
  {  
    server1.request.controller = button;
    client1.waitForExistence();
    
    if (client1.call(server1))
    {
       y = server1.response.speed;
       
       if( y == speed && y == 10 && button == 'w')
       { printf("speed cannot be increased further \n");}
       else
       { speed = y;
         printf("speed: %f \n", speed);}
    } }
  else if(button == 's')
  {  
    server1.request.controller = button;
    client1.waitForExistence();
    
    if (client1.call(server1))
    {
       y = server1.response.speed;
       
       if( y == 0 && y == speed && button == 's')
      { printf("speed cannot be decreased further \n");}
       else
       { speed = y;
         printf("speed: %f \n", speed);}
    } 
    }
  
    else {
    printf("please press the correct buttons \n");}
  }  
return 0;
}    

