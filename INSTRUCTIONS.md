
# CPSC 120-10 - Lab 5 - Instructions

This week we're going to work on multiple/combined assignment, input/output manipulation, chars and strings, some math functions, and generating random numbers.

## Part 0 - Git Ignore

Last week we learned how to use the *.gitignore* file. This week we'll make it official: From now on, every assignment you submit will be expected to use an appropriate *.gitignore* file that prevents git from tracking all your compilation artifacts and datafiles.

In other words: Always use *.gitignore* to ensure only you actual source code files get tracked into git.

## Part 1 - Starting Your Program

As usual, start with a source code file named *main.cpp* that contains the basic structure of a C++ program. See if you can get it to run.

Notice anything? You weren't provided a Makefile again. Go ahead and create one that compiles your *main.cpp* source code file into an executable named *lab5-main.bin*, using all the usual g++ flags.

Also create a target in your Makefile named *lab5-main* that both compiles and executes this program. This target should execute by default.

Also, from here on out, for each target that executes commands in your Makefile: Have the target print a general announcement of what it is doing.

## Part 2 - Multiple and Combined Assignment

Inside your program, do the following:

1. Create integer variables: *a*, *b*, and *c*. Do not assign values during declaration.

2. Assign all three variables to the number *5*, using ***only one statement***.

3. Increment the *a* variable by 1, using combined assignment.

4. Subtract the *b* variable by 3, using combined assignment.

5. Multiply the *c* variable by 2, using combined assignment.

6. Print an announcement that you will print these three variables, then print them to the terminal.


## Part 3 - Formatting Output

Add the following to your *main.cpp* code:

1. Again, print an announcement that you will print the variables from *Part 2*, but that you will print them both  right-justified and then left-justified.

2. On the next line, print those three variables in tabular format, each with a field 20 characters wide, and right-justified.

3. On the next line, print those three variables in tabular format, each with a field 20 characters wide, and left-justified.

4. Create a new variable called my_precision_test of type double, and assign to it the value 0.123456789

5. Announce and print your my_precision variable to the terminal right-justified, with a field 20 characters wide, with 10 digits of precision after the decimal point, and then in the next column with 2 digits of precision.

6. Repeat steps 4 and 5 but with a new variable name, an initial value of 1.0, and force cout to print digits after the decimal point.

## Part 4 - Chars, Strings, and More cin

### Some basic input/output manipulation

Add the following to your *main.cpp* code:

1. Create any variables as you want for this part. *Hint: You probably want at least one std::string and one char*

2. Ask the user to enter a word of at least three characters in length.

3. Using *cin.get()* read in the first character of input from the user and assign it to one of your variables.

4. Skip the second character of the user's input.

5. Read in the third character of the user's input, and assign it to another variable.

6. Print out the following message: *The first character you typed was X, and the third character was Y*
    * You may have guessed that X should actually be the user's first inputted character, and Y the third.

7. Repeat steps 2-6, except:

    1. Ask the user for a word at least five characters long
    2. Using only one statement with *cin.ignore()*, grab and print only the first and the fifth characters

8. Ask the user for another word of any length, input it, and tell the user how long their string was (how many characters it contains).

*Hint:* Try running your program and inputting a very long word for step 2. Does it get in the way of the second word's input? Try using *cin.ignore()* with a very high value of *n*, and a *c* value of the escape sequence *\n* (which your program received when the user presses enter).

### Making a header

Let's make a visually striking header for our program. You'll print some text that looks like the following:

```
==================================================
==================================================
========== This would be sweet to use
==================================================
==================================================
```

1. Make a new std::string variable named *header_message* to hold your message. Initialize it to the string *This would be sweet to use* as seen above.

2. Make two more variables to hold the two repeating sequences of '=' chars you need. Do ***not*** use literal strings of many '=' characters to accomplish this. Use *std::string::assign* instead.

3. Print the header with calls to std::cout.

4. Use combined assignment to append the following string to your *header_message* variable:
    * *, if only I were ready to create functions!*

5. Print the full header again, with the modified *header_message* variable.

*Food for thought*: Isn't it irritating to write out all that cout code twice in a row? Wouldn't it be great if we could write a function that printed our header with any message we chose?

## Part 5 - C-Strings

For this part, we'll start a new program.

### Makefile and Executable

Start a new program and corresponding Makefile targets:

* The source code file should be named *cstrings.cpp*.

* The Makefile target should be named *lab5-cstrings*.

* The executable should be named *lab5-cstrings.bin*.

### The Program

1. Declare a C-String (aka *char array*). Give it room for 100 characters.

2. Ask the user to enter a word of at least 5 characters in length.

3. Using *cin.getline()* (which is different than *std::getline*), read only the first 3 characters of the user's input to a variable. *Hint: cin.getline() counts the NULL terminator as a character.*

4. Print the string "Whoops: " followed by the variable you just used to store the first 3 characters of the user's input, to the terminal.

### Your Thoughts

Add a new section to your README.md file titled *CString Overflow - My Thoughts*, and answer the following questions:

1. What do you think might happen if you attempted to read 50000 characters into a CString (aka *char array*) that was only 50 characters long? Assume C++ would provide no protection within your program when this happened, but might protect other programs from your program's write operations.

2. What do you think might happen in the first question, if operating systems didn't isolate and protect different programs from each other?

## Part 6 - Math Functions and Random Numbers

For this part, start another program with the following details:

* Name the source code file *math_random.cpp*.
* Name the Makefile target *lab5-math-random*.
* Name the executable *lab5-math-random.bin*.

Then do the following:

1. Generate a random number from 0 and 999 and store it in a variable.
    
    * *Hint*: Seed your random number generator first with *srand(time(0));*
    * *Hint*: Use the modulus operator to limit the output of rand()

2. Announce and print the result of the following mathematical operations against your variable:
    
    * The unaltered variable's value
    * The sin() of your variable
    * The tangent of your variable
    * The square root of your variable
    * The value of your variable squared
    * The value of your variable to the 25th power

3. Announce and print the result of the following mathematical operations against the number *-7*:

    * The absolute value










