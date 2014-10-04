INCLUDE_PATH =  -I"$$ROS_LOCATION/include/" -I"/home/mafilipp/catkin_ws/src/mafilipp/roboscoop/roboscoop_lib/_cpp" -I"$$CATKIN_WORKSPACE/devel/include/" -I"$$ROBOLAB_ASEBA_PATH/asebaros/srv_gen/cpp/include/" -I"$$ROBOLAB_ASEBA_PATH/asebaros/msg_gen/cpp/include/"
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/home/mafilipp/Eiffel_14.05/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DWORKBENCH -I"/home/mafilipp/Eiffel_14.05/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m elf_x86_64 -shared -o
EIFLIB = "/home/mafilipp/Eiffel_14.05/studio/spec/linux-x86-64/lib/libmtwkbench.a"
EIFTEMPLATES = /home/mafilipp/Eiffel_14.05/studio/config/linux-x86-64/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/home/mafilipp/Eiffel_14.05/studio/spec/linux-x86-64/bin/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = driver.so 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C15_c.o 

OLDOBJECTS =  sp482.o sp482d.o ar488.o ar488d.o ty487.o ty487d.o tr466.o tr466d.o \
	bo469.o bo469d.o ar472.o ar472d.o fi468.o fi468d.o co463.o co463d.o \
	co493.o co493d.o to471.o to471d.o dy474.o dy474d.o it484.o it484d.o \
	it485.o it485d.o ac462.o ac462d.o ac492.o ac492d.o re489.o re489d.o \
	dy473.o dy473d.o li490.o li490d.o in476.o in476d.o ta477.o ta477d.o \
	un480.o un480d.o in483.o in483d.o li481.o li481d.o ba464.o ba464d.o \
	ba494.o ba494d.o se478.o se478d.o bo467.o bo467d.o re486.o re486d.o \
	co465.o co465d.o na470.o na470d.o bi479.o bi479d.o ch475.o ch475d.o \
	cu491.o cu491d.o 

all: Cobj15.o

Cobj15.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj15.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

