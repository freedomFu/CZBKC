objects = testchar.o
execobj = testchar

all : $(execobj)
	@rm $(objects)

$(execobj) : $(objects)
	gcc $^ -o $@

.PHONY : all clean

%.o : %.c
	gcc -c $< -o $@

clean :
	-rm $(execobj)

