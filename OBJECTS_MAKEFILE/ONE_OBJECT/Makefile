.PHONY : bin clean
run: bin 
	./$^ 
bin : obj.o
	gcc $^ -o $@
obj.o : hello.c
	gcc -c $^ -o $@
clean :
	rm *.o bin ||:			