objects = x509decodeCer.o

VPATH = ../ArrayTest

TestExec : $(objects)
	gcc $(objects) -o TestExec -lcrypto

x509decodeCer.o : testHeader.h

.PHONY : clean

clean :
	-rm TestExec
	-rm $(objects)
	cat x509decodeCer.c
