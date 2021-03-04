CC := g++
CFLAGS := -Wall -pedantic --std=c++17

# Variables
	LAB5_EXE_NAME := lab5-main.bin
	LAB5_EXE_PATH := ./$(LAB5_EXE_NAME)

# My Targets

lab5-main.bin:	
	@echo Building $@
	$(CC) $(LINK_FLAGS) main.cpp -o $@ \
		&& chmod +x $@

lab5-main:	lab5-main.bin
	$(LAB5_EXE_PATH)

