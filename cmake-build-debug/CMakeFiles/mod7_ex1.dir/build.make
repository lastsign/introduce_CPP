# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ptycho/Documents/42cursus/modules

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ptycho/Documents/42cursus/modules/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mod7_ex1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mod7_ex1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mod7_ex1.dir/flags.make

CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.o: CMakeFiles/mod7_ex1.dir/flags.make
CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.o: ../mod7/ex01/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ptycho/Documents/42cursus/modules/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.o -c /Users/ptycho/Documents/42cursus/modules/mod7/ex01/main.cpp

CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ptycho/Documents/42cursus/modules/mod7/ex01/main.cpp > CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.i

CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ptycho/Documents/42cursus/modules/mod7/ex01/main.cpp -o CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.s

# Object files for target mod7_ex1
mod7_ex1_OBJECTS = \
"CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.o"

# External object files for target mod7_ex1
mod7_ex1_EXTERNAL_OBJECTS =

mod7_ex1: CMakeFiles/mod7_ex1.dir/mod7/ex01/main.cpp.o
mod7_ex1: CMakeFiles/mod7_ex1.dir/build.make
mod7_ex1: CMakeFiles/mod7_ex1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ptycho/Documents/42cursus/modules/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mod7_ex1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mod7_ex1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mod7_ex1.dir/build: mod7_ex1

.PHONY : CMakeFiles/mod7_ex1.dir/build

CMakeFiles/mod7_ex1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mod7_ex1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mod7_ex1.dir/clean

CMakeFiles/mod7_ex1.dir/depend:
	cd /Users/ptycho/Documents/42cursus/modules/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ptycho/Documents/42cursus/modules /Users/ptycho/Documents/42cursus/modules /Users/ptycho/Documents/42cursus/modules/cmake-build-debug /Users/ptycho/Documents/42cursus/modules/cmake-build-debug /Users/ptycho/Documents/42cursus/modules/cmake-build-debug/CMakeFiles/mod7_ex1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mod7_ex1.dir/depend

