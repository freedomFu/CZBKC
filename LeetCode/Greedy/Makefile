objects = $(execobj).o
execobj = Lemonade_Change860
execobjall = Lemonade_Change860 CanPlaceFlowers Non-overlappingIntervals435 Candy135 AssignCookies455

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	g++ $^ -o $@

.PHONY : all clean cleanall

clean :
	@-rm $(execobj)

cleanall:
	@-rm $(execobjall)

