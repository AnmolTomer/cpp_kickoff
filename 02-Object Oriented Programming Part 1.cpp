// 02-Object Oriented Programming Part 1

/* Before starting our discussion on C++, it is highly relevant to understand the areas where C had drawbacks, and then
discussing its replacements and fixes in C++.

Function Oriented Programming Language : In this approach the entire program is divided into small programs called sub routines
known as functions.

Case 1 :

Say we have a C program of 100 lines and post compilation it is showing an error, say line number of error is unknown
to us, then we have to check 100 lines for error. It ends up being more time consuming. Also, what if we have to execute
only 10 lines of the code, still there's no way for us to not execute rest 90 lines, leading to excess time and memory consumption.

Case 2 : Here we have the same program but what we do is we divide the program into 5 functions of 20 lines each. It leads to a big
program divided into 5 small pieces or sub routines called functions. Now if we have an error then we can rectify it by just checking
20 lines. Takes less memory and time as we call the function we need and no need to execute all the functions.
Another major advantage of functions are Write Once Use Multiple times i.e. we can call function multiple times with different parameters.

e.g. of Function : (i) printf() : Designed to perform output operations.
                   (ii) scanf() : Designed to perform output operations.

Disadvantages of functions :

Say there are 3 functions sum, prod, and div to perform sum, product and division inside the main() function of a typical C program.
Before main we have globally divided int a,b making them accessible by all the functions in the program. So int a,b can be accessed or
can be passed as a parameter to sum(), prod(), div() functions and are freely moving. And if we have a larger program with 1000+ lines of
code then it gets really difficult to keep a track of which variable is being used by which function. So, main problem boils down to
when data is global then any function can access it, and thus it is not secure and unprotected.

Next, logical step would be to look for a mechanism to make secure applications and restrict freely flowing data.

This was fundamentally the reason why Object Oriented Programming paradigm was invented.

What happens in Object Oriented Approach is kind of similar to what is happening here. As variables and functions are present here,
in object oriented also program is divided into functions and objects but there we bind the data and function together into a
single unit called object.

Say we want to prevent the access of global variables int a, b defined above in the example by the function division, then OOP approach
to tackle this is to make an object which contains the functions sum() and prod() inside it and declare int a,b inside the object.
Variables and functions are together placed in a single unit called object in OOP.
C++ supports the concept of Object Oriented due to the introduction of classes concept.
Class is the blueprint of an object. Just like for a function we have a function prototype, for an object we have a class.
Using classes we are able to do data encapsulation, i.e. data of one object is accessible only through member function of the same class.
Thus, data encapsulation makes the data secure, and free flowing accessibility problem is also solved, making this one of the go to
approach while designing programs in the industry keeping long term stability in mind.

Next : Features of OOP : Class, Object, Polymorphism etc.