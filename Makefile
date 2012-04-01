
CC = gcc
CLANGDAO ?= clangdao

INCLUDE = -I. -I/usr/local/dao/include -Iwrap
LIB = -L. -L/usr/lib
CFLAG = -c -fPIC
LFLAG = -lGL -lGLU

GL_INC =

TARGET = DaoOpenGL.so

UNAME = $(shell uname)

ifeq ($(UNAME), Linux)
  CFLAG += -DUNIX
  LFLAG += -fPIC -shared -Wl,-soname,libDaoOpenGL.so
  GL_INC += -I/usr/include/GL
endif

ifeq ($(UNAME), Darwin)
  TARGET = DaoOpenGL.dylib
  CFLAG += -DUNIX -DMAC_OSX
  LFLAG += -fPIC -dynamiclib -undefined dynamic_lookup -install_name libDaoOpenGL.dylib
  GL_INC += -I/System/Library/Frameworks/OpenGL.framework/Headers
  LIB += -L/System/Library/Frameworks/OpenGL.framework/Libraries
endif

INCLUDE += $(GL_INC)

OBJECTS = wrap/dao_OpenGL.o wrap/dao_OpenGL2.o wrap/dao_OpenGL3.o

first: all 

all: $(TARGET)

.SUFFIXES: .c .obj .cpp .cc .cxx .C

.c.o:
	$(CC) $(INCLUDE) -c $(CFLAGS) -o $@ $<

$(TARGET): $(OBJECTS)
	$(CC) $(LIB) $(LFLAG) -o $@ $<

bind:
	@test -d wrap || mkdir wrap
	$(CLANGDAO) $(GL_INC) opengl.c -o wrap/

clean:
	rm $(OBJECTS)
