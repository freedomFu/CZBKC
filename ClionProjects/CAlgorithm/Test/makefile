objects = testchar.o
execobj = testchar

# default: all
# VPATH := src:../header
CFLAGS += $(patsubst %, -I%, $(subst :, ,$(VPATH)))
# ERR = $(error found an error)
# WARN = $(warning this is a warning)
#
# sources := foo.c bar.c baz.s ugh.h
#
# files := $(foreach n,$(sources),$(n).ppt)
#
# ifforamt := $(if $(words $(sources)) eq 4, $(filter-out %.c %.s, $(sources)), 222)
#
# expression = gcc -$(1) -$(2) -$(3)
#
# filess := $(shell echo *.c)
#
# foo := $(call expression,c,o,p)



all : $(execobj)
# 	@echo $(subst ee,EE,feet on the street)
# 	@echo $(patsubst %.c,%.o,x.c.c bar.c)
# 	@echo $(strip a b c )
# 	@echo $(findstring a, e b c )
# 	@echo $(filter %.c %.s, $(sources))
# 	@echo $(filter-out %.c %.s, $(sources))
# 	@echo $(sort abc bar 2shd djksadkj)
# 	@echo $(word 2,bar 2shd djksadkj)
# 	@echo $(wordlist 4,3,bar 2shd djksadkj)
# 	@echo $(words bar 2shd djksadkj dsads)
# 	@echo $(firstword bar 2shd djksadkj dsads)
# 	@echo $(CFLAGS)
# 	@echo $(dir src/foo.c hacks)
# 	@echo $(notdir src/foo.c hacks)
# 	@echo $(suffix src/foo.c hacks)
# 	@echo $(basename src/foo.c hacks hacks.o.c .o.c)
# 	@echo $(addsuffix .c,foo bar)
# 	@echo $(addprefix .c,foo bar)
# 	@echo $(join aaa bbb ccc ddd eee,111 222 333 444)
# 	@echo $(files)
# 	@echo $(ifforamt)
# 	@echo $(foo)
# 	@echo $(filess)
	@echo $(SUFFIXE)
	@rm $(objects)

test :
	@echo 1111111

$(execobj) : $(objects)
	gcc $^ -o $@


#err : $(ERR)
# warn : $(WARN)
.PHONY : all clean test

.DEFAULT_GOAL := test

%.o : %.c
	gcc -c $< -o $@

clean :
	-rm $(execobj)

ifeq ($(MAKECMDGOALS), clean)
	echo 1111
endif