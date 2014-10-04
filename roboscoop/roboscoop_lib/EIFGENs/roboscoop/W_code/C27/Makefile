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

OBJECTS = big_file_C27_c.o 

OLDOBJECTS =  ty858.o ty858d.o ty865.o ty865d.o ty866.o ty866d.o ty877.o ty877d.o \
	ty878.o ty878d.o ty859.o ty859d.o ty862.o ty862d.o ty864.o ty864d.o \
	ty867.o ty867d.o ty876.o ty876d.o ty879.o ty879d.o ty887.o ty887d.o \
	ty888.o ty888d.o li880.o li880d.o rt863.o rt863d.o rt875.o rt875d.o \
	rt886.o rt886d.o ha869.o ha869d.o rt874.o rt874d.o rt884.o rt884d.o \
	rt890.o rt890d.o li881.o li881d.o ce860.o ce860d.o ta870.o ta870d.o \
	ha871.o ha871d.o se889.o se889d.o rt861.o rt861d.o rt885.o rt885d.o \
	st868.o st868d.o li883.o li883d.o ta872.o ta872d.o ta873.o ta873d.o \
	li882.o li882d.o 

all: Cobj27.o

Cobj27.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj27.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

