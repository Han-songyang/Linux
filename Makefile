


test.o:test.c
	gcc -c $^ -o $@

test1.o:test1.c
	gcc -c $^ -o $@

test2.o:test2.c
	gcc -c $^ -o $@


test: test.o test1.o test2.o
	gcc $^ -o $@

