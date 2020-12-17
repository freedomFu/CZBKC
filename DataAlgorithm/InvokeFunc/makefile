objects = $(execobj).o
execobj = NumDisaArray448
execobjall = NumDisaArray448 fibo bubble

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	g++ $^ -o $@

.PHONY : all clean cleanall

clean :
	@-rm $(execobj)

cleanall:
	@-rm $(execobjall)

