# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/164/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/164/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/For.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/For.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/For.dir/flags.make

CMakeFiles/For.dir/main.cpp.o: CMakeFiles/For.dir/flags.make
CMakeFiles/For.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/For.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/For.dir/main.cpp.o -c /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/main.cpp

CMakeFiles/For.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/For.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/main.cpp > CMakeFiles/For.dir/main.cpp.i

CMakeFiles/For.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/For.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/main.cpp -o CMakeFiles/For.dir/main.cpp.s

# Object files for target For
For_OBJECTS = \
"CMakeFiles/For.dir/main.cpp.o"

# External object files for target For
For_EXTERNAL_OBJECTS =

For: CMakeFiles/For.dir/main.cpp.o
For: CMakeFiles/For.dir/build.make
For: CMakeFiles/For.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable For"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/For.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/For.dir/build: For
.PHONY : CMakeFiles/For.dir/build

CMakeFiles/For.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/For.dir/cmake_clean.cmake
.PHONY : CMakeFiles/For.dir/clean

CMakeFiles/For.dir/depend:
	cd /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassFour/For/cmake-build-debug/CMakeFiles/For.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/For.dir/depend

