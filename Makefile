CC=gcc
CFLAGS= -Wall -pedantic
LDFLAGS=
SOURCES=ex01numbers.c ex02sqrt.c
EXECUTABLE=make
OBJECTS=$(SOURCES:.c=.o)

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

ex01numbers: 
	ex01numbers.c

ex02sqrt:
	ex02sqrt.c

#Tests-runs files with test input
ex01numbers-test:
	ex01numbers.o < ex01numbers-test.txt

ex02sqrt-test:
	ex02sqrt.o < ex02sqrt-test.txt

test: ex01numbers-test ex02sqrt-test


clean:
	rm -f *.o 

