# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/test-loop.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test-loop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test-loop.dir/flags.make

CMakeFiles/test-loop.dir/3-looping/test-loop.c.o: CMakeFiles/test-loop.dir/flags.make
CMakeFiles/test-loop.dir/3-looping/test-loop.c.o: ../3-looping/test-loop.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test-loop.dir/3-looping/test-loop.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test-loop.dir/3-looping/test-loop.c.o   -c "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/3-looping/test-loop.c"

CMakeFiles/test-loop.dir/3-looping/test-loop.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-loop.dir/3-looping/test-loop.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/3-looping/test-loop.c" > CMakeFiles/test-loop.dir/3-looping/test-loop.c.i

CMakeFiles/test-loop.dir/3-looping/test-loop.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-loop.dir/3-looping/test-loop.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/3-looping/test-loop.c" -o CMakeFiles/test-loop.dir/3-looping/test-loop.c.s

# Object files for target test-loop
test__loop_OBJECTS = \
"CMakeFiles/test-loop.dir/3-looping/test-loop.c.o"

# External object files for target test-loop
test__loop_EXTERNAL_OBJECTS =

test-loop: CMakeFiles/test-loop.dir/3-looping/test-loop.c.o
test-loop: CMakeFiles/test-loop.dir/build.make
test-loop: CMakeFiles/test-loop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test-loop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-loop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test-loop.dir/build: test-loop

.PHONY : CMakeFiles/test-loop.dir/build

CMakeFiles/test-loop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test-loop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test-loop.dir/clean

CMakeFiles/test-loop.dir/depend:
	cd "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles/test-loop.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/test-loop.dir/depend

