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
include CMakeFiles/StudentScoreArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StudentScoreArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudentScoreArray.dir/flags.make

CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.o: CMakeFiles/StudentScoreArray.dir/flags.make
CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.o: ../5-array/StudentScoreArray.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.o   -c "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/5-array/StudentScoreArray.c"

CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/5-array/StudentScoreArray.c" > CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.i

CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/5-array/StudentScoreArray.c" -o CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.s

# Object files for target StudentScoreArray
StudentScoreArray_OBJECTS = \
"CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.o"

# External object files for target StudentScoreArray
StudentScoreArray_EXTERNAL_OBJECTS =

StudentScoreArray: CMakeFiles/StudentScoreArray.dir/5-array/StudentScoreArray.c.o
StudentScoreArray: CMakeFiles/StudentScoreArray.dir/build.make
StudentScoreArray: CMakeFiles/StudentScoreArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable StudentScoreArray"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StudentScoreArray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudentScoreArray.dir/build: StudentScoreArray

.PHONY : CMakeFiles/StudentScoreArray.dir/build

CMakeFiles/StudentScoreArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StudentScoreArray.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StudentScoreArray.dir/clean

CMakeFiles/StudentScoreArray.dir/depend:
	cd "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles/StudentScoreArray.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/StudentScoreArray.dir/depend
