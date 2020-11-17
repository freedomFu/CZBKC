objects = *.o
execobj = testchar test2
paths = ../Test2   #dasds

all : $(execobj)
	cd ${paths}/222 ; pwd

.PHONY : all clean

$(objects) : %.o : %.c
	$(cc) -c $(CFLAGS) $< -o $@

clean :
	-rm ${execobj}

