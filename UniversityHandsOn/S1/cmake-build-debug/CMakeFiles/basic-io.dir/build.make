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
include CMakeFiles/basic-io.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/basic-io.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/basic-io.dir/flags.make

CMakeFiles/basic-io.dir/1-input-output/basic-io.c.o: CMakeFiles/basic-io.dir/flags.make
CMakeFiles/basic-io.dir/1-input-output/basic-io.c.o: ../1-input-output/basic-io.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/basic-io.dir/1-input-output/basic-io.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/basic-io.dir/1-input-output/basic-io.c.o   -c "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/1-input-output/basic-io.c"

CMakeFiles/basic-io.dir/1-input-output/basic-io.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/basic-io.dir/1-input-output/basic-io.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/1-input-output/basic-io.c" > CMakeFiles/basic-io.dir/1-input-output/basic-io.c.i

CMakeFiles/basic-io.dir/1-input-output/basic-io.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/basic-io.dir/1-input-output/basic-io.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/1-input-output/basic-io.c" -o CMakeFiles/basic-io.dir/1-input-output/basic-io.c.s

# Object files for target basic-io
basic__io_OBJECTS = \
"CMakeFiles/basic-io.dir/1-input-output/basic-io.c.o"

# External object files for target basic-io
basic__io_EXTERNAL_OBJECTS =

basic-io: CMakeFiles/basic-io.dir/1-input-output/basic-io.c.o
basic-io: CMakeFiles/basic-io.dir/build.make
basic-io: CMakeFiles/basic-io.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable basic-io"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basic-io.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/basic-io.dir/build: basic-io

.PHONY : CMakeFiles/basic-io.dir/build

CMakeFiles/basic-io.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/basic-io.dir/cmake_clean.cmake
.PHONY : CMakeFiles/basic-io.dir/clean

CMakeFiles/basic-io.dir/depend:
	cd "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles/basic-io.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/basic-io.dir/depend

