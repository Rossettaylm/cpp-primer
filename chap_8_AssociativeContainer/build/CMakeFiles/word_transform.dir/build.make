# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build

# Include any dependencies generated for this target.
include CMakeFiles/word_transform.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/word_transform.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/word_transform.dir/flags.make

CMakeFiles/word_transform.dir/word_transform.cpp.o: CMakeFiles/word_transform.dir/flags.make
CMakeFiles/word_transform.dir/word_transform.cpp.o: ../word_transform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/word_transform.dir/word_transform.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/word_transform.dir/word_transform.cpp.o -c /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/word_transform.cpp

CMakeFiles/word_transform.dir/word_transform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/word_transform.dir/word_transform.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/word_transform.cpp > CMakeFiles/word_transform.dir/word_transform.cpp.i

CMakeFiles/word_transform.dir/word_transform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/word_transform.dir/word_transform.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/word_transform.cpp -o CMakeFiles/word_transform.dir/word_transform.cpp.s

# Object files for target word_transform
word_transform_OBJECTS = \
"CMakeFiles/word_transform.dir/word_transform.cpp.o"

# External object files for target word_transform
word_transform_EXTERNAL_OBJECTS =

word_transform: CMakeFiles/word_transform.dir/word_transform.cpp.o
word_transform: CMakeFiles/word_transform.dir/build.make
word_transform: CMakeFiles/word_transform.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable word_transform"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/word_transform.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/word_transform.dir/build: word_transform

.PHONY : CMakeFiles/word_transform.dir/build

CMakeFiles/word_transform.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/word_transform.dir/cmake_clean.cmake
.PHONY : CMakeFiles/word_transform.dir/clean

CMakeFiles/word_transform.dir/depend:
	cd /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build /home/rossetta/Code/cpp_primer/chap_8_AssociativeContainer/build/CMakeFiles/word_transform.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/word_transform.dir/depend
