# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/moka3156/Dokumente/prog/A3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moka3156/Dokumente/prog/A3/build

# Include any dependencies generated for this target.
include CMakeFiles/aufgabe2bis4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/aufgabe2bis4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aufgabe2bis4.dir/flags.make

CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o: CMakeFiles/aufgabe2bis4.dir/flags.make
CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o: ../aufgabe2bis4.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moka3156/Dokumente/prog/A3/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o -c /home/moka3156/Dokumente/prog/A3/aufgabe2bis4.cpp

CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moka3156/Dokumente/prog/A3/aufgabe2bis4.cpp > CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.i

CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moka3156/Dokumente/prog/A3/aufgabe2bis4.cpp -o CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.s

CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.requires:
.PHONY : CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.requires

CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.provides: CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.requires
	$(MAKE) -f CMakeFiles/aufgabe2bis4.dir/build.make CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.provides.build
.PHONY : CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.provides

CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.provides.build: CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o

# Object files for target aufgabe2bis4
aufgabe2bis4_OBJECTS = \
"CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o"

# External object files for target aufgabe2bis4
aufgabe2bis4_EXTERNAL_OBJECTS =

aufgabe2bis4: CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o
aufgabe2bis4: CMakeFiles/aufgabe2bis4.dir/build.make
aufgabe2bis4: CMakeFiles/aufgabe2bis4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable aufgabe2bis4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aufgabe2bis4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aufgabe2bis4.dir/build: aufgabe2bis4
.PHONY : CMakeFiles/aufgabe2bis4.dir/build

CMakeFiles/aufgabe2bis4.dir/requires: CMakeFiles/aufgabe2bis4.dir/aufgabe2bis4.cpp.o.requires
.PHONY : CMakeFiles/aufgabe2bis4.dir/requires

CMakeFiles/aufgabe2bis4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aufgabe2bis4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aufgabe2bis4.dir/clean

CMakeFiles/aufgabe2bis4.dir/depend:
	cd /home/moka3156/Dokumente/prog/A3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moka3156/Dokumente/prog/A3 /home/moka3156/Dokumente/prog/A3 /home/moka3156/Dokumente/prog/A3/build /home/moka3156/Dokumente/prog/A3/build /home/moka3156/Dokumente/prog/A3/build/CMakeFiles/aufgabe2bis4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/aufgabe2bis4.dir/depend
