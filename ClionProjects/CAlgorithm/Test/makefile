objects = *.o
execobj = testchar test2

all : $(execobj)

.PHONY : all clean

$(objects) : %.o : %.c
	$(cc) -c $(CFLAGS) $< -o $@

clean :
	-rm ${execobj}

