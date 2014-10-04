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

OBJECTS = big_file_C14_c.o 

OLDOBJECTS =  sp429.o sp429d.o sp452.o sp452d.o ar430.o ar430d.o ar458.o ar458d.o \
	ty446.o ty446d.o ty451.o ty451d.o ty457.o ty457d.o ar435.o ar435d.o \
	li439.o li439d.o to434.o to434d.o di444.o di444d.o rt445.o rt445d.o \
	rt448.o rt448d.o it454.o it454d.o it455.o it455d.o re431.o re431d.o \
	re459.o re459d.o rt450.o rt450d.o li460.o li460d.o li440.o li440d.o \
	in437.o in437d.o in453.o in453d.o qu443.o qu443d.o ac436.o ac436d.o \
	li438.o li438d.o bo432.o bo432d.o rt447.o rt447d.o re456.o re456d.o \
	st449.o st449d.o li442.o li442d.o na433.o na433d.o li441.o li441d.o \
	cu461.o cu461d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

