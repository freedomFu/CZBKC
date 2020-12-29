objects = $(execobj).o
execobj = Triangular
execobjall = val_class Matrix Triangular Stack1 Stack test

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

