// 08-Cout in C++

/*

Cout : It is a predefined object and is an object of ostream class. It can be used in the program only after including the
<iostream> header file.

cout stands for console output.
cout performs both formatted and unformatted output operations.
cout does not need any conversion characters, which is not the case while using printf i.e. we do not have to use
%d, %f,%u, %s etc. and cout is able to print without using conversion characters. It is due to implicit (internal) conversion.

Syntax :
cout << Text/variables/expressions ;
<< is insertion operator or put to operator or output operator and is an overloaded left-shift operator.
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    float b = 1.2;
    cout << "Welcome !" <<endl; //Prints "Welcome !" with a new line at the end on screen.
    cout << a << endl; //Prints integer 100 with a new line at the end on screen. Notice how we do not use %d as conversion is implicit.
    cout << b << endl; //Prints float 1.2 with a new line at the end on screen. Notice how we do not use %f as conversion is implicit.
    return 0;

}

// Next : cin in C++