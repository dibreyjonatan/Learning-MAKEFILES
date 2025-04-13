
BIN: *.c
	gcc $^ -o $@
output : BIN 
	./$^	
		
clean :  
	 $(shell rm -f BIN )	

run : output clean 
.PHONY : run 
		





# This was a trash to learn 



#all : output clean 
#.PHONY : all 
	
#PATH=~/LEARNING_MAKEFILE/FIRST_MAKE
#FILE=$(PATH)/simple.c
#OUTPUT_PATH != pwd 
#output : $(FILE)
#	 $(shell gcc $(FILE) -o output)
#	 ./output
		
			
