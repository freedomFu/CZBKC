objects = $(execobj).o
execobj = Min_Stack155
execobjall = Min_Stack155 TwoSum1 MaxChunksToMakeSorted769 Searcha2DMatrix240 Rotate_Image48 TransposeMatrix867 NumDisaArray448

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	g++ $^ -o $@

.PHONY : all clean cleanall

clean :
	@-rm $(execobj)

cleanall:
	@-rm $(execobjall)

