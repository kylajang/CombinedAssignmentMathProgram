CC := g++
CFLAGS := -Wall -pedantic --std=c++17

# Variables
	LAB5_EXE_NAME := lab5-main.bin
	LAB5_EXE_PATH := ./$(LAB5_EXE_NAME)
	CSTRINGS_EXE_NAME := lab5-cstrings.bin
	CSTRINGS_EXE_PATH := ./$(CSTRINGS_EXE_NAME)
	MATH_EXE_NAME := lab5-math-random.bin
	MATH_EXE_PATH := ./$(MATH_EXE_NAME)

# My Targets

lab5-main.bin:
	@echo Building $@
	$(CC) $(LINK_FLAGS) main.cpp -o $@ \
		&& chmod +x $@

lab5-main:	lab5-main.bin
	$(LAB5_EXE_PATH)

lab5-cstrings:	$(CSTRINGS_EXE_PATH)
	$(CSTRINGS_EXE_PATH)

$(CSTRINGS_EXE_PATH):
	@echo Building $@
	$(CC) $(LINK_FLAGS) cstrings.cpp -o $@ \
		&&chmod +x $@

clean:
	rm *.bin

lab5-math-random:	$(MATH_EXE_PATH)
	$(MATH_EXE_PATH)

$(MATH_EXE_PATH):
	@echo Building $@
	$(CC) $(LINK_FLAGS) math_random.cpp -o $@ \
		&&chmod +x $@
