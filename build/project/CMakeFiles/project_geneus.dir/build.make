# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aayush/rstrack/assignments/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aayush/rstrack/assignments/build

# Utility rule file for project_geneus.

# Include the progress variables for this target.
include project/CMakeFiles/project_geneus.dir/progress.make

project_geneus: project/CMakeFiles/project_geneus.dir/build.make

.PHONY : project_geneus

# Rule to build all files generated by this target.
project/CMakeFiles/project_geneus.dir/build: project_geneus

.PHONY : project/CMakeFiles/project_geneus.dir/build

project/CMakeFiles/project_geneus.dir/clean:
	cd /home/aayush/rstrack/assignments/build/project && $(CMAKE_COMMAND) -P CMakeFiles/project_geneus.dir/cmake_clean.cmake
.PHONY : project/CMakeFiles/project_geneus.dir/clean

project/CMakeFiles/project_geneus.dir/depend:
	cd /home/aayush/rstrack/assignments/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aayush/rstrack/assignments/src /home/aayush/rstrack/assignments/src/project /home/aayush/rstrack/assignments/build /home/aayush/rstrack/assignments/build/project /home/aayush/rstrack/assignments/build/project/CMakeFiles/project_geneus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : project/CMakeFiles/project_geneus.dir/depend

