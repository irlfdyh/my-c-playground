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
include CMakeFiles/huruf-vokal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/huruf-vokal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/huruf-vokal.dir/flags.make

CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.o: CMakeFiles/huruf-vokal.dir/flags.make
CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.o: ../2-condition/huruf-vokal.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.o   -c "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/2-condition/huruf-vokal.c"

CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/2-condition/huruf-vokal.c" > CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.i

CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/2-condition/huruf-vokal.c" -o CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.s

# Object files for target huruf-vokal
huruf__vokal_OBJECTS = \
"CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.o"

# External object files for target huruf-vokal
huruf__vokal_EXTERNAL_OBJECTS =

huruf-vokal: CMakeFiles/huruf-vokal.dir/2-condition/huruf-vokal.c.o
huruf-vokal: CMakeFiles/huruf-vokal.dir/build.make
huruf-vokal: CMakeFiles/huruf-vokal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable huruf-vokal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/huruf-vokal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/huruf-vokal.dir/build: huruf-vokal

.PHONY : CMakeFiles/huruf-vokal.dir/build

CMakeFiles/huruf-vokal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/huruf-vokal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/huruf-vokal.dir/clean

CMakeFiles/huruf-vokal.dir/depend:
	cd "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug" "/home/irshalfir/Documents/University/[3] STUDY/SEMESTER-ONE/Algoritma dan Pemrograman/[Und] Handson/SemesterOneHandsOnCollection/cmake-build-debug/CMakeFiles/huruf-vokal.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/huruf-vokal.dir/depend
