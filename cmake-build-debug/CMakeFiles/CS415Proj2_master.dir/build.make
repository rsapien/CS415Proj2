# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/robertsapien/Desktop/CS415Proj2-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS415Proj2_master.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS415Proj2_master.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS415Proj2_master.dir/flags.make

CMakeFiles/CS415Proj2_master.dir/main.cpp.o: CMakeFiles/CS415Proj2_master.dir/flags.make
CMakeFiles/CS415Proj2_master.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS415Proj2_master.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS415Proj2_master.dir/main.cpp.o -c /Users/robertsapien/Desktop/CS415Proj2-master/main.cpp

CMakeFiles/CS415Proj2_master.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS415Proj2_master.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robertsapien/Desktop/CS415Proj2-master/main.cpp > CMakeFiles/CS415Proj2_master.dir/main.cpp.i

CMakeFiles/CS415Proj2_master.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS415Proj2_master.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robertsapien/Desktop/CS415Proj2-master/main.cpp -o CMakeFiles/CS415Proj2_master.dir/main.cpp.s

# Object files for target CS415Proj2_master
CS415Proj2_master_OBJECTS = \
"CMakeFiles/CS415Proj2_master.dir/main.cpp.o"

# External object files for target CS415Proj2_master
CS415Proj2_master_EXTERNAL_OBJECTS =

CS415Proj2_master: CMakeFiles/CS415Proj2_master.dir/main.cpp.o
CS415Proj2_master: CMakeFiles/CS415Proj2_master.dir/build.make
CS415Proj2_master: CMakeFiles/CS415Proj2_master.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CS415Proj2_master"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS415Proj2_master.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS415Proj2_master.dir/build: CS415Proj2_master

.PHONY : CMakeFiles/CS415Proj2_master.dir/build

CMakeFiles/CS415Proj2_master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS415Proj2_master.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS415Proj2_master.dir/clean

CMakeFiles/CS415Proj2_master.dir/depend:
	cd /Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/robertsapien/Desktop/CS415Proj2-master /Users/robertsapien/Desktop/CS415Proj2-master /Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug /Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug /Users/robertsapien/Desktop/CS415Proj2-master/cmake-build-debug/CMakeFiles/CS415Proj2_master.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS415Proj2_master.dir/depend
