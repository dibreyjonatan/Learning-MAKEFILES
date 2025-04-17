SRC_dir=.

src=$(wildcard $(SRC_dir)/*.c)

objs=$(patsubst %.c,%.o,$(src))

CFLAGS= -Wall
CFLAGS+= -g 
CFLAGS+= -Werror 
CFLAGS+= -std=c11

.PHONY : bin run clean 
run: bin 
	./$^
bin : $(objs)
	gcc $^ -o $@
%.o :%.c 
	gcc -c $(CFLAGS) $^ -o $@
clean :
	rm *.o bin ||:			