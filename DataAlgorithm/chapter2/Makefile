objects = $(execobj).o
execobj = exer26
execobjall = exer26 exer25 exer24 exer23 exer22 

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	g++ $^ -o $@

.PHONY : all clean cleanall

clean :
	@-rm $(execobj)

cleanall:
	@-rm $(execobjall)

