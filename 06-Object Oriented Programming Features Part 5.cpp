// 06-Object Oriented Programming Features Part 5

/*
------------------------------------------------------------------------------------------------------------------------------
Inheritance : It is the process of deriving a new class from an existing class/classes.
              We pass the properties of one class to another class. That is why it is also called derivation.

Say we have some class A with 200 lines of code and our requirement is to have another class with same blueprint as class A.
Either we can rewrite the new class with all 200 lines again , where there are more chances of error, length and complexity increases,
also memory consumed increases as well.
To avoid such hassle, we have the concept of Inheritance in OOP.
We declare or derive class B from class A.

class B: public/private/protected class A
Line above tells the compiler that A is the base class and B is the derived class. A is base or superclass in line above. B : Derived or sub
What happens is that all the A class properties are passed to class B and B too has 200 lines which A has inside it, without writing the
class B entirely.
We reuse the class A properties in declaring class B. This is called reusability.
Now we can further add 50 lines i.e. more features to class B and this is called extensibility. Ability to extend.
Thus, sub/derived class B has both class A properties and class B properties.

------------------------------------------------------------------------------------------------------------------------------

Polymorphism : Poly + Morph = Many+ form/shape/kind i.e. using of one object in different forms.
Say we want to add 2 strings using same + operator. It is not possible in C language. But this is allowed in C++ as it allows the
concept of Polymorphism.
In C we can't have several functions with same name, but it is possible in C++, again due to Polymorphism.
Polymorphism allows the user to use the same object for different purposes.
Polymorphism too allows the concept of reusability and extensibility.

Reusability : Using same function for different purposes. Extending the functionality of the same function using extensibility.

Polymorphism has 2 topics Overloading and Binding. Overloading has 2 topics function Overloading and operator Overloading.
Binding has 2 types : Static/Early/Compile-time Binding or Dynamic/Late or Run-time binding.

These were the important features of C++ OOP with the concept of message communication.
Message communication means we declare the objects and these objects communicate with each other by sending functions.
Message means nothing but function. By using functions we are able to allow communication of one object with another.
------------------------------------------------------------------------------------------------------------------------------
CPP Input and Output :

C++ extension of C. All C features are nothing but C++ features. All C functions, data types, operators we can use as it is in C++.
e.g. printf,scanf etc.
C is a function Oriented Programming language. CPP is an OOP language.
Though, we say C++ is an Object Oriented Programming language but C++ isn't purely OOP language.
Because it is optional to have OOP paradigm in our program and even without it we can create C++ program successfully.
In order to support all the features of C, C++ is functional as well as object oriented.
An example of pure OO language is JAVA.

In C++ input and output is controlled by streams.
Stream : Flow of characters or bytes which are having a source or destination.
Majorly 2 types of streams are going to be used in C++ :
1. Input stream 2. Output Stream
Streams provide predefined classes and objects to control the standard input/output operations.

What are the predefined classes we are using in C++ ?
IOS is the first base class. From IOS class we have 2 derived classes istream and ostream. istream for input stream and ostream
for output stream/operations, combination of istream and ostream is iostream. These are predefined classes, available in iostream.h.

Header file for printf is stdio.h
predefined object from iostream is cin, another predefined object from ostream is cout.

cout :
cout is an object of ostream class.
Used only after including <iostream> header file in C++ program.
cout stands for console output.
cout performs both formatted and unformmated output operations.
cout does not need any conversion characters like %d, %c, %s,%u etc. As there is implicit  or internal conversion.
Syntax : cout << text/variable/expressions;
<< : Insertion Operator or put to operator or output operator and this is an overloaded left shift operator.
We already use << in BITWISE operator along with that we use it with cout too.
*/

// Implementation of cout
#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome\n";
    int a = 100;
    float b = 10.2;
    cout<<a<<endl;
    cout<<b;
}
