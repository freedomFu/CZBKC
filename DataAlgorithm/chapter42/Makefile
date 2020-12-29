objects = $(execobj).o
execobj = Triangular
execobjall = Triangular

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

