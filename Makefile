ex01numbers: ex01numbers.c
	gcc ex01numbers.c -o ex01numbers -lm

ex02sqrt: ex02sqrt.c
	gcc ex02sqrt.c -o ex02sqrt -lm

all: ex01numbers ex02sqrt

ex01numbers-test: ex01numbers.c 
	gcc ex01numbers.c -o ex01numbers -lm;./ex01numbers 10

ex02sqrt-test: ex02sqrt.c
	gcc ex02sqrt.c -o ex02sqrt -lm;./ex02sqrt 144 0.001

test: ex01numbers-test ex02sqrt-test
	

clean:
	rm ex01numbers ex02sqrt
