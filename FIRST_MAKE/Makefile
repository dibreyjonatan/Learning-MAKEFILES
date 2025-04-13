all : output clean 
.PHONY : all 
	
PATH=~/LEARNING_MAKEFILE/FIRST_MAKE
FILE=$(PATH)/simple.c
OUTPUT_PATH != pwd 
output : $(FILE)
	 $(shell gcc $(FILE) -o output)
	 ./output
	
clean :  
	 $(shell rm -f $(OUTPUT_PATH)/output)	


		
	
