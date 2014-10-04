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

OBJECTS = big_file_C26_c.o 

OLDOBJECTS =  ty851.o ty851d.o ty852.o ty852d.o ty857.o ty857d.o ty848.o ty848d.o \
	ty853.o ty853d.o ty856.o ty856d.o tr831.o tr831d.o bo834.o bo834d.o \
	ar837.o ar837d.o fi833.o fi833d.o co828.o co828d.o to836.o to836d.o \
	rt850.o rt850d.o dy839.o dy839d.o ac827.o ac827d.o dy838.o dy838d.o \
	rt847.o rt847d.o rt854.o rt854d.o li825.o li825d.o ce855.o ce855d.o \
	in841.o in841d.o ta842.o ta842d.o un845.o un845d.o li846.o li846d.o \
	ba829.o ba829d.o se843.o se843d.o bo832.o bo832d.o rt849.o rt849d.o \
	co830.o co830d.o na835.o na835d.o bi844.o bi844d.o ch840.o ch840d.o \
	cu826.o cu826d.o 

all: Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj26.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

