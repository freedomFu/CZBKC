objects = $(execobj).o
execobj = Test1
execobjall = Test1 exercise17 Pointerfunc swaptest Tpid test++ getName execrise15 exercise16

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	g++ $^ -o $@

.PHONY : all clean cleanall

clean :
	@-rm $(execobj)

cleanall:
	@-rm $(execobjall)

