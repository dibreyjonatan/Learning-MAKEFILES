$(info $(shell echo "You could find me with -C arg , i am learning how to use Targets"))

hello :
	@echo "i am trying to understand targets in makefile"	
	
first_target:
	python hello.py
second_target:third_target
third_target:
	@echo "i was called by the second target"
	
clean:
	@echo "i am cleaning all the unnecessary files"
	
# @ prevents the command from being printed on the terminale 	
