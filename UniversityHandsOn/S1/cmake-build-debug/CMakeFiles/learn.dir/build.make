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
include CMakeFiles/learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learn.dir/flags.make

CMakeFiles/learn.dir/4-function/Try.c.o: CMakeFiles/learn.dir/flags.make
CMakeFiles/learn.dir/4-function/Try.c.o: ../4-function/Try.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/learn.dir/4-function/Try.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/learn.dir/4-function/Try.c.o   -c "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/4-function/Try.c"

CMakeFiles/learn.dir/4-function/Try.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/learn.dir/4-function/Try.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/4-function/Try.c" > CMakeFiles/learn.dir/4-function/Try.c.i

CMakeFiles/learn.dir/4-function/Try.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/learn.dir/4-function/Try.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/4-function/Try.c" -o CMakeFiles/learn.dir/4-function/Try.c.s

# Object files for target learn
learn_OBJECTS = \
"CMakeFiles/learn.dir/4-function/Try.c.o"

# External object files for target learn
learn_EXTERNAL_OBJECTS =

learn: CMakeFiles/learn.dir/4-function/Try.c.o
learn: CMakeFiles/learn.dir/build.make
learn: CMakeFiles/learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable learn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learn.dir/build: learn

.PHONY : CMakeFiles/learn.dir/build

CMakeFiles/learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learn.dir/clean

CMakeFiles/learn.dir/depend:
	cd "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles/learn.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/learn.dir/depend
