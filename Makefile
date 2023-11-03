strcontains.o: strcontains.c strcontains.h ../../lib/strlen.o
	gcc -Wall -g -c strcontains.c ../../lib/strlen.o

install: strcontains.o
	cp -v strcontains.o ../../lib/strcontains.o
	cp -v strcontains.h ../../lib/strcontains.h
