# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\gabri\CLionProjects\lab3trening

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\lab3trening.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\lab3trening.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\lab3trening.dir\flags.make

CMakeFiles\lab3trening.dir\main.cpp.obj: CMakeFiles\lab3trening.dir\flags.make
CMakeFiles\lab3trening.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab3trening.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab3trening.dir\main.cpp.obj /FdCMakeFiles\lab3trening.dir\ /FS -c C:\Users\gabri\CLionProjects\lab3trening\main.cpp
<<

CMakeFiles\lab3trening.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3trening.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\lab3trening.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\CLionProjects\lab3trening\main.cpp
<<

CMakeFiles\lab3trening.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3trening.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab3trening.dir\main.cpp.s /c C:\Users\gabri\CLionProjects\lab3trening\main.cpp
<<

CMakeFiles\lab3trening.dir\MyArray.cpp.obj: CMakeFiles\lab3trening.dir\flags.make
CMakeFiles\lab3trening.dir\MyArray.cpp.obj: ..\MyArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab3trening.dir/MyArray.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab3trening.dir\MyArray.cpp.obj /FdCMakeFiles\lab3trening.dir\ /FS -c C:\Users\gabri\CLionProjects\lab3trening\MyArray.cpp
<<

CMakeFiles\lab3trening.dir\MyArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3trening.dir/MyArray.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\lab3trening.dir\MyArray.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\CLionProjects\lab3trening\MyArray.cpp
<<

CMakeFiles\lab3trening.dir\MyArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3trening.dir/MyArray.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab3trening.dir\MyArray.cpp.s /c C:\Users\gabri\CLionProjects\lab3trening\MyArray.cpp
<<

# Object files for target lab3trening
lab3trening_OBJECTS = \
"CMakeFiles\lab3trening.dir\main.cpp.obj" \
"CMakeFiles\lab3trening.dir\MyArray.cpp.obj"

# External object files for target lab3trening
lab3trening_EXTERNAL_OBJECTS =

lab3trening.exe: CMakeFiles\lab3trening.dir\main.cpp.obj
lab3trening.exe: CMakeFiles\lab3trening.dir\MyArray.cpp.obj
lab3trening.exe: CMakeFiles\lab3trening.dir\build.make
lab3trening.exe: CMakeFiles\lab3trening.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab3trening.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\lab3trening.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\lab3trening.dir\objects1.rsp @<<
 /out:lab3trening.exe /implib:lab3trening.lib /pdb:C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug\lab3trening.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\lab3trening.dir\build: lab3trening.exe
.PHONY : CMakeFiles\lab3trening.dir\build

CMakeFiles\lab3trening.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab3trening.dir\cmake_clean.cmake
.PHONY : CMakeFiles\lab3trening.dir\clean

CMakeFiles\lab3trening.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\gabri\CLionProjects\lab3trening C:\Users\gabri\CLionProjects\lab3trening C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug C:\Users\gabri\CLionProjects\lab3trening\cmake-build-debug\CMakeFiles\lab3trening.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\lab3trening.dir\depend
