objects = $(execobj).o
execobj = insertTest
execobjall = insertTest queuetest sortest multiFind

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	g++ $^ -o $@

.PHONY : all clean cleanall

clean :
	@-rm $(execobj)

cleanall:
	@-rm $(execobjall)
	@-rm $(objects)

