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
CMAKE_SOURCE_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FunctionPalceholderWarning.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/FunctionPalceholderWarning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FunctionPalceholderWarning.dir/flags.make

CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.o: CMakeFiles/FunctionPalceholderWarning.dir/flags.make
CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.o -c /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/main.cpp

CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/main.cpp > CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.i

CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/main.cpp -o CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.s

# Object files for target FunctionPalceholderWarning
FunctionPalceholderWarning_OBJECTS = \
"CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.o"

# External object files for target FunctionPalceholderWarning
FunctionPalceholderWarning_EXTERNAL_OBJECTS =

FunctionPalceholderWarning: CMakeFiles/FunctionPalceholderWarning.dir/main.cpp.o
FunctionPalceholderWarning: CMakeFiles/FunctionPalceholderWarning.dir/build.make
FunctionPalceholderWarning: CMakeFiles/FunctionPalceholderWarning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FunctionPalceholderWarning"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FunctionPalceholderWarning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FunctionPalceholderWarning.dir/build: FunctionPalceholderWarning
.PHONY : CMakeFiles/FunctionPalceholderWarning.dir/build

CMakeFiles/FunctionPalceholderWarning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FunctionPalceholderWarning.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FunctionPalceholderWarning.dir/clean

CMakeFiles/FunctionPalceholderWarning.dir/depend:
	cd /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug /home/cheung/Desktop/Program/CPPProgram/HeiMaCPP/ClassEleven/FunctionPalceholderWarning/cmake-build-debug/CMakeFiles/FunctionPalceholderWarning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FunctionPalceholderWarning.dir/depend

