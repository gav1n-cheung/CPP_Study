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
CMAKE_SOURCE_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassObjectCharacteristics4.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ClassObjectCharacteristics4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassObjectCharacteristics4.dir/flags.make

CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.o: CMakeFiles/ClassObjectCharacteristics4.dir/flags.make
CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.o -c /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/main.cpp

CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/main.cpp > CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.i

CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/main.cpp -o CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.s

# Object files for target ClassObjectCharacteristics4
ClassObjectCharacteristics4_OBJECTS = \
"CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.o"

# External object files for target ClassObjectCharacteristics4
ClassObjectCharacteristics4_EXTERNAL_OBJECTS =

ClassObjectCharacteristics4: CMakeFiles/ClassObjectCharacteristics4.dir/main.cpp.o
ClassObjectCharacteristics4: CMakeFiles/ClassObjectCharacteristics4.dir/build.make
ClassObjectCharacteristics4: CMakeFiles/ClassObjectCharacteristics4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClassObjectCharacteristics4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClassObjectCharacteristics4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassObjectCharacteristics4.dir/build: ClassObjectCharacteristics4
.PHONY : CMakeFiles/ClassObjectCharacteristics4.dir/build

CMakeFiles/ClassObjectCharacteristics4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClassObjectCharacteristics4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClassObjectCharacteristics4.dir/clean

CMakeFiles/ClassObjectCharacteristics4.dir/depend:
	cd /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4 /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4 /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassTwelve/ClassObjectCharacteristics4/cmake-build-debug/CMakeFiles/ClassObjectCharacteristics4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassObjectCharacteristics4.dir/depend

