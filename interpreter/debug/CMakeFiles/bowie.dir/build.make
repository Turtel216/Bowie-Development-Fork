# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dimitrios/Documents/Dev/bowie/interpreter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dimitrios/Documents/Dev/bowie/interpreter/debug

# Include any dependencies generated for this target.
include CMakeFiles/bowie.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bowie.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bowie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bowie.dir/flags.make

CMakeFiles/bowie.dir/src/main.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/main.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/main.c
CMakeFiles/bowie.dir/src/main.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bowie.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/main.c.o -MF CMakeFiles/bowie.dir/src/main.c.o.d -o CMakeFiles/bowie.dir/src/main.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/main.c

CMakeFiles/bowie.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/main.c > CMakeFiles/bowie.dir/src/main.c.i

CMakeFiles/bowie.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/main.c -o CMakeFiles/bowie.dir/src/main.c.s

CMakeFiles/bowie.dir/src/error.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/error.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/error.c
CMakeFiles/bowie.dir/src/error.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/bowie.dir/src/error.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/error.c.o -MF CMakeFiles/bowie.dir/src/error.c.o.d -o CMakeFiles/bowie.dir/src/error.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/error.c

CMakeFiles/bowie.dir/src/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/error.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/error.c > CMakeFiles/bowie.dir/src/error.c.i

CMakeFiles/bowie.dir/src/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/error.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/error.c -o CMakeFiles/bowie.dir/src/error.c.s

CMakeFiles/bowie.dir/src/interpreter.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/interpreter.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/interpreter.c
CMakeFiles/bowie.dir/src/interpreter.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/bowie.dir/src/interpreter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/interpreter.c.o -MF CMakeFiles/bowie.dir/src/interpreter.c.o.d -o CMakeFiles/bowie.dir/src/interpreter.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/interpreter.c

CMakeFiles/bowie.dir/src/interpreter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/interpreter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/interpreter.c > CMakeFiles/bowie.dir/src/interpreter.c.i

CMakeFiles/bowie.dir/src/interpreter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/interpreter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/interpreter.c -o CMakeFiles/bowie.dir/src/interpreter.c.s

CMakeFiles/bowie.dir/src/lexer.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/lexer.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/lexer.c
CMakeFiles/bowie.dir/src/lexer.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/bowie.dir/src/lexer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/lexer.c.o -MF CMakeFiles/bowie.dir/src/lexer.c.o.d -o CMakeFiles/bowie.dir/src/lexer.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/lexer.c

CMakeFiles/bowie.dir/src/lexer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/lexer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/lexer.c > CMakeFiles/bowie.dir/src/lexer.c.i

CMakeFiles/bowie.dir/src/lexer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/lexer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/lexer.c -o CMakeFiles/bowie.dir/src/lexer.c.s

CMakeFiles/bowie.dir/src/chunk.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/chunk.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/chunk.c
CMakeFiles/bowie.dir/src/chunk.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/bowie.dir/src/chunk.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/chunk.c.o -MF CMakeFiles/bowie.dir/src/chunk.c.o.d -o CMakeFiles/bowie.dir/src/chunk.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/chunk.c

CMakeFiles/bowie.dir/src/chunk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/chunk.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/chunk.c > CMakeFiles/bowie.dir/src/chunk.c.i

CMakeFiles/bowie.dir/src/chunk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/chunk.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/chunk.c -o CMakeFiles/bowie.dir/src/chunk.c.s

CMakeFiles/bowie.dir/src/value.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/value.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/value.c
CMakeFiles/bowie.dir/src/value.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/bowie.dir/src/value.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/value.c.o -MF CMakeFiles/bowie.dir/src/value.c.o.d -o CMakeFiles/bowie.dir/src/value.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/value.c

CMakeFiles/bowie.dir/src/value.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/value.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/value.c > CMakeFiles/bowie.dir/src/value.c.i

CMakeFiles/bowie.dir/src/value.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/value.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/value.c -o CMakeFiles/bowie.dir/src/value.c.s

CMakeFiles/bowie.dir/src/virtual_machine.c.o: CMakeFiles/bowie.dir/flags.make
CMakeFiles/bowie.dir/src/virtual_machine.c.o: /home/dimitrios/Documents/Dev/bowie/interpreter/src/virtual_machine.c
CMakeFiles/bowie.dir/src/virtual_machine.c.o: CMakeFiles/bowie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/bowie.dir/src/virtual_machine.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bowie.dir/src/virtual_machine.c.o -MF CMakeFiles/bowie.dir/src/virtual_machine.c.o.d -o CMakeFiles/bowie.dir/src/virtual_machine.c.o -c /home/dimitrios/Documents/Dev/bowie/interpreter/src/virtual_machine.c

CMakeFiles/bowie.dir/src/virtual_machine.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/bowie.dir/src/virtual_machine.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dimitrios/Documents/Dev/bowie/interpreter/src/virtual_machine.c > CMakeFiles/bowie.dir/src/virtual_machine.c.i

CMakeFiles/bowie.dir/src/virtual_machine.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/bowie.dir/src/virtual_machine.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dimitrios/Documents/Dev/bowie/interpreter/src/virtual_machine.c -o CMakeFiles/bowie.dir/src/virtual_machine.c.s

# Object files for target bowie
bowie_OBJECTS = \
"CMakeFiles/bowie.dir/src/main.c.o" \
"CMakeFiles/bowie.dir/src/error.c.o" \
"CMakeFiles/bowie.dir/src/interpreter.c.o" \
"CMakeFiles/bowie.dir/src/lexer.c.o" \
"CMakeFiles/bowie.dir/src/chunk.c.o" \
"CMakeFiles/bowie.dir/src/value.c.o" \
"CMakeFiles/bowie.dir/src/virtual_machine.c.o"

# External object files for target bowie
bowie_EXTERNAL_OBJECTS =

bowie: CMakeFiles/bowie.dir/src/main.c.o
bowie: CMakeFiles/bowie.dir/src/error.c.o
bowie: CMakeFiles/bowie.dir/src/interpreter.c.o
bowie: CMakeFiles/bowie.dir/src/lexer.c.o
bowie: CMakeFiles/bowie.dir/src/chunk.c.o
bowie: CMakeFiles/bowie.dir/src/value.c.o
bowie: CMakeFiles/bowie.dir/src/virtual_machine.c.o
bowie: CMakeFiles/bowie.dir/build.make
bowie: CMakeFiles/bowie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable bowie"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bowie.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bowie.dir/build: bowie
.PHONY : CMakeFiles/bowie.dir/build

CMakeFiles/bowie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bowie.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bowie.dir/clean

CMakeFiles/bowie.dir/depend:
	cd /home/dimitrios/Documents/Dev/bowie/interpreter/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dimitrios/Documents/Dev/bowie/interpreter /home/dimitrios/Documents/Dev/bowie/interpreter /home/dimitrios/Documents/Dev/bowie/interpreter/debug /home/dimitrios/Documents/Dev/bowie/interpreter/debug /home/dimitrios/Documents/Dev/bowie/interpreter/debug/CMakeFiles/bowie.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/bowie.dir/depend
