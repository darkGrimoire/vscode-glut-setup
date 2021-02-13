# This is the Makefile for Hello GLUT. It builds the Hello GLUT executable.

# Directories containing C headers. Edit to match path containing freeglut headers.
INCLUDE_DIRS = -I"C:\MinGW\freeglut\include"

# Directories containing import libraries. Edit to match path containing freeglut libs.
LIB_DIRS = -L"C:\MinGW\freeglut\lib"

# Warnings to be raised by the C compiler
WARNS = -Wall

# Names of tools to use when building
CC = gcc

# Default file name of main program
FILE_NAME = main

# Compiler and linker flags
# STATIC LINKING:
CFLAGS = ${WARNS} -D FREEGLUT_STATIC ${INCLUDE_DIRS}
LDFLAGS = -s -lfreeglut_static -lopengl32 -lwinmm -lgdi32 -Wl,--subsystem,windows ${LIB_DIRS}
# DYNAMIC LINKING:
# CFLAGS = ${WARNS} ${INCLUDE_DIRS}
# LDFLAGS = -s -lfreeglut -lopengl32 -Wl,--subsystem,windows ${LIB_DIRS}

# Object files to create exe
OBJS = obj/${FILE_NAME}.o

.PHONY: all clean

all: clean | bin/${FILE_NAME}.exe

clean:
	if exist obj\*.o            del obj\*.o
	if exist bin\${FILE_NAME}.exe  del bin\${FILE_NAME}.exe

obj:
	@if not exist obj mkdir obj

bin:
	@if not exist bin mkdir bin

bin/${FILE_NAME}.exe: ${OBJS} | bin
	${CC} -o "$@" ${OBJS} ${LDFLAGS}

obj/%.o: %.c | obj
	${CC} ${CFLAGS} -c $< -o $@

obj/%.o: %.cpp | obj
	${CC} ${CFLAGS} -c $< -o $@