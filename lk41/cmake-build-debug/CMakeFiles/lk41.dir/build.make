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
CMAKE_COMMAND = "/Users/mac1094/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/mac1094/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/THU/lk41

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/THU/lk41/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lk41.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lk41.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lk41.dir/flags.make

CMakeFiles/lk41.dir/main.cpp.o: CMakeFiles/lk41.dir/flags.make
CMakeFiles/lk41.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/THU/lk41/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lk41.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lk41.dir/main.cpp.o -c /Volumes/THU/lk41/main.cpp

CMakeFiles/lk41.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lk41.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/THU/lk41/main.cpp > CMakeFiles/lk41.dir/main.cpp.i

CMakeFiles/lk41.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lk41.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/THU/lk41/main.cpp -o CMakeFiles/lk41.dir/main.cpp.s

# Object files for target lk41
lk41_OBJECTS = \
"CMakeFiles/lk41.dir/main.cpp.o"

# External object files for target lk41
lk41_EXTERNAL_OBJECTS =

lk41: CMakeFiles/lk41.dir/main.cpp.o
lk41: CMakeFiles/lk41.dir/build.make
lk41: CMakeFiles/lk41.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/THU/lk41/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lk41"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lk41.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lk41.dir/build: lk41

.PHONY : CMakeFiles/lk41.dir/build

CMakeFiles/lk41.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lk41.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lk41.dir/clean

CMakeFiles/lk41.dir/depend:
	cd /Volumes/THU/lk41/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/THU/lk41 /Volumes/THU/lk41 /Volumes/THU/lk41/cmake-build-debug /Volumes/THU/lk41/cmake-build-debug /Volumes/THU/lk41/cmake-build-debug/CMakeFiles/lk41.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lk41.dir/depend

