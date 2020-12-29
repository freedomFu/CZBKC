objects = $(execobj).o
execobj = exercise35
execobjall = exercise35 exercise34 exercise33 exercise32 exercise31 testlast testSet testMap design2 designGenAlg insertTest queuetest sortest multiFind

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

