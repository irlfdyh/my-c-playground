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
include CMakeFiles/program-harga-pisang-goreng.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program-harga-pisang-goreng.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program-harga-pisang-goreng.dir/flags.make

CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.o: CMakeFiles/program-harga-pisang-goreng.dir/flags.make
CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.o: ../1-input-output/program-harga-pisang-goreng.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.o   -c "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/1-input-output/program-harga-pisang-goreng.c"

CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/1-input-output/program-harga-pisang-goreng.c" > CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.i

CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/1-input-output/program-harga-pisang-goreng.c" -o CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.s

# Object files for target program-harga-pisang-goreng
program__harga__pisang__goreng_OBJECTS = \
"CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.o"

# External object files for target program-harga-pisang-goreng
program__harga__pisang__goreng_EXTERNAL_OBJECTS =

program-harga-pisang-goreng: CMakeFiles/program-harga-pisang-goreng.dir/1-input-output/program-harga-pisang-goreng.c.o
program-harga-pisang-goreng: CMakeFiles/program-harga-pisang-goreng.dir/build.make
program-harga-pisang-goreng: CMakeFiles/program-harga-pisang-goreng.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable program-harga-pisang-goreng"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program-harga-pisang-goreng.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program-harga-pisang-goreng.dir/build: program-harga-pisang-goreng

.PHONY : CMakeFiles/program-harga-pisang-goreng.dir/build

CMakeFiles/program-harga-pisang-goreng.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program-harga-pisang-goreng.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program-harga-pisang-goreng.dir/clean

CMakeFiles/program-harga-pisang-goreng.dir/depend:
	cd "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles/program-harga-pisang-goreng.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/program-harga-pisang-goreng.dir/depend
