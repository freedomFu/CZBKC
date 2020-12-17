objects = $(execobj).o
execobj = testarray
CFLAGS += $(patsubst %, -I%, $(subst :, ,$(VPATH)))

all : $(execobj)
	@echo $(SUFFIXE)
	@rm $(objects)

test :
	@echo 1111111

$(execobj) : $(objects)
	gcc $^ -o $@

.PHONY : all clean

%.o : %.c
	gcc -c $< -o $@

clean :
	-rm $(execobj)

ifeq ($(MAKECMDGOALS), clean)
	echo 1111
endif