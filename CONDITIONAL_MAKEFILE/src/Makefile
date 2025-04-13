#$(MAKECMDGOALS)

FILE ?=
PREFIX=$(basename $(FILE))
#depending on the file extension we will personalise the target 

ifeq ($(FILE),$(wildcard *.c))
CC=gcc
$(info $(shell echo "it is a C file"))
TARGET=$(addsuffix _c,$(PREFIX))
endif

ifeq ($(FILE),$(wildcard *.cpp))
CC=g++
$(info $(shell echo "it is a CPP file"))
TARGET=$(addsuffix _cpp,$(PREFIX))
endif

$(TARGET): $(FILE)  
	$(CC) -o $@ $^  
	
FINAL : $(TARGET)
	./$^	
clean :
	rm *_c *_cpp	
	
