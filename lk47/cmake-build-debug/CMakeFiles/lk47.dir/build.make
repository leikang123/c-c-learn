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
CMAKE_SOURCE_DIR = "/Volumes/THU/CLion_R code/lk47"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/THU/CLion_R code/lk47/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lk47.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lk47.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lk47.dir/flags.make

CMakeFiles/lk47.dir/main.cpp.o: CMakeFiles/lk47.dir/flags.make
CMakeFiles/lk47.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/THU/CLion_R code/lk47/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lk47.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lk47.dir/main.cpp.o -c "/Volumes/THU/CLion_R code/lk47/main.cpp"

CMakeFiles/lk47.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lk47.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Volumes/THU/CLion_R code/lk47/main.cpp" > CMakeFiles/lk47.dir/main.cpp.i

CMakeFiles/lk47.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lk47.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Volumes/THU/CLion_R code/lk47/main.cpp" -o CMakeFiles/lk47.dir/main.cpp.s

# Object files for target lk47
lk47_OBJECTS = \
"CMakeFiles/lk47.dir/main.cpp.o"

# External object files for target lk47
lk47_EXTERNAL_OBJECTS =

lk47: CMakeFiles/lk47.dir/main.cpp.o
lk47: CMakeFiles/lk47.dir/build.make
lk47: CMakeFiles/lk47.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/THU/CLion_R code/lk47/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lk47"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lk47.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lk47.dir/build: lk47

.PHONY : CMakeFiles/lk47.dir/build

CMakeFiles/lk47.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lk47.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lk47.dir/clean

CMakeFiles/lk47.dir/depend:
	cd "/Volumes/THU/CLion_R code/lk47/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/THU/CLion_R code/lk47" "/Volumes/THU/CLion_R code/lk47" "/Volumes/THU/CLion_R code/lk47/cmake-build-debug" "/Volumes/THU/CLion_R code/lk47/cmake-build-debug" "/Volumes/THU/CLion_R code/lk47/cmake-build-debug/CMakeFiles/lk47.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lk47.dir/depend

