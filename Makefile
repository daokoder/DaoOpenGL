
CC = gcc
CLANGDAO ?= clangdao

INCLUDE = -I. -I/usr/local/dao/include -Iwrap
LIBS = -L. -L/usr/lib
CFLAGS = -c -fPIC
LFLAGS = -lGL -lGLU

GL_INC =

TARGET = DaoOpenGL.so

UNAME = $(shell uname)

ifeq ($(UNAME), Linux)
  CFLAGS += -DUNIX
  LFLAGS += -fPIC -shared -Wl,-soname,libDaoOpenGL.so
  GL_INC += -I/usr/include/GL
endif

ifeq ($(UNAME), Darwin)
  TARGET = DaoOpenGL.dylib
  CFLAGS += -DUNIX -DMAC_OSX
  LFLAGS += -fPIC -dynamiclib -undefined dynamic_lookup -install_name libDaoOpenGL.dylib
  GL_INC += -I/System/Library/Frameworks/OpenGL.framework/Headers
  LIBS += -L/System/Library/Frameworks/OpenGL.framework/Libraries
endif

INCLUDE += $(GL_INC)

OBJECTS = wrap/dao_OpenGL.o wrap/dao_OpenGL2.o wrap/dao_OpenGL3.o

first: all 

all: $(TARGET)

.SUFFIXES: .c .obj .cpp .cc .cxx .C

.c.o:
	$(CC) $(INCLUDE) -c $(CFLAGS) -o $@ $<

$(TARGET): $(OBJECTS)
	$(CC) $(LIBS) $(LFLAGS) -o $@ $(OBJECTS)

bind:
	@test -d wrap || mkdir wrap
	$(CLANGDAO) $(GL_INC) opengl.c -o wrap/

clean:
	rm $(OBJECTS)
