objects = *.o
execobj = testchar test2
paths = ../Test2   #dasds

define two-lines
	echo foo
	echo $(execobj)
endef

all : $(execobj)

.PHONY : all clean

$(execobj) : % : %.o

$(objects) : %.o : %.c
	$(cc) -c $(CFLAGS) $< -o $@




clean :
	-rm ${execobj}

