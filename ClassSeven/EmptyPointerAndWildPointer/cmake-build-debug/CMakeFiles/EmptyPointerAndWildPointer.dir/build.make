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
CMAKE_SOURCE_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EmptyPointerAndWildPointer.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/EmptyPointerAndWildPointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EmptyPointerAndWildPointer.dir/flags.make

CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.o: CMakeFiles/EmptyPointerAndWildPointer.dir/flags.make
CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.o -c /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/main.cpp

CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/main.cpp > CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.i

CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/main.cpp -o CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.s

# Object files for target EmptyPointerAndWildPointer
EmptyPointerAndWildPointer_OBJECTS = \
"CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.o"

# External object files for target EmptyPointerAndWildPointer
EmptyPointerAndWildPointer_EXTERNAL_OBJECTS =

EmptyPointerAndWildPointer: CMakeFiles/EmptyPointerAndWildPointer.dir/main.cpp.o
EmptyPointerAndWildPointer: CMakeFiles/EmptyPointerAndWildPointer.dir/build.make
EmptyPointerAndWildPointer: CMakeFiles/EmptyPointerAndWildPointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EmptyPointerAndWildPointer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EmptyPointerAndWildPointer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EmptyPointerAndWildPointer.dir/build: EmptyPointerAndWildPointer
.PHONY : CMakeFiles/EmptyPointerAndWildPointer.dir/build

CMakeFiles/EmptyPointerAndWildPointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EmptyPointerAndWildPointer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EmptyPointerAndWildPointer.dir/clean

CMakeFiles/EmptyPointerAndWildPointer.dir/depend:
	cd /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassSeven/EmptyPointerAndWildPointer/cmake-build-debug/CMakeFiles/EmptyPointerAndWildPointer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EmptyPointerAndWildPointer.dir/depend

