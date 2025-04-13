$(info $(shell echo /home/$$(whoami) ))
FILE ?= 

define GCC
gcc -o result $(1)
endef
PHONE: $(FILE)
	$(call GCC, $(FILE))
clean:
	@echo "i am cleaning the output files"
	rm result 
