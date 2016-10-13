Question
========

Question 2.5 states: Change Fillvector.cpp so that it prints the lines (backwards) from last to first.

Algorithm
=========

The implemented algorithm read the input file line by line and pushes the strings into a stack<string> object.

Build
=====

To build the source code execute make in the top level directory (i.e. the one that contains the makefile :).
A binary named backwards_printer should be created.

Run
===

You need to provide the binary an ASCII text file (I assume your file is called 'yourFile.txt') and invoke the program like this: 
$ ./backwards_printer yourFile.txt

Test
====

If you want to build and run the tests then please first open the makefile and set the two variables BOOST_INCLUDE and BOOST_LIB to the path where you have installed
boost on your system (I used Boost 1.60.0).

Then type

$ make check

and that should run the unit tests.

For some reason that I could not figure out the boost unit test output is:

"Running 1 test case...

*** No errors detected
*** Error in `./check': corrupted double-linked list: 0x0000000000a1d210 ***
Aborted (core dumped)"

Even if I do not invoke a single statement inside the defined unit test... Therefore the error doesn't seem to be in my designed class. I would be more than happy for some feedback concerning this. 


Contact
=======

Many thanks for reading through the entire README file! For hugs and bugs leave me a message to matthias.kreileder@gmail.com I will my best to provide you a swift reply.
