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

OBJECTS = big_file_C13_c.o 

OLDOBJECTS =  ty428.o ty428d.o tr413.o tr413d.o bo421.o bo421d.o li398.o li398d.o \
	fi420.o fi420d.o co407.o co407d.o di426.o di426d.o dy415.o dy415d.o \
	it401.o it401d.o it402.o it402d.o ac410.o ac410d.o dy414.o dy414d.o \
	li408.o li408d.o li399.o li399d.o ce405.o ce405d.o in417.o in417d.o \
	ta418.o ta418d.o un423.o un423d.o in400.o in400d.o li424.o li424d.o \
	ba411.o ba411d.o se419.o se419d.o re403.o re403d.o co412.o co412d.o \
	li406.o li406d.o bi422.o bi422d.o li397.o li397d.o st425.o st425d.o \
	ta396.o ta396d.o li404.o li404d.o ar427.o ar427d.o ch416.o ch416d.o \
	cu409.o cu409d.o 

all: Cobj13.o

Cobj13.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj13.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

