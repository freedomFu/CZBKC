objects = $(execobj).o
execobj = testMap
execobjall = testMap design2 designGenAlg insertTest queuetest sortest multiFind

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

