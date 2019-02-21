// 09-Cin in C++

/*
Cin : It is a predefined object and is an object of istream class. It can be used in the program only after including the
<iostream> header file.

cin stands for console input.

Syntax :
cin >> variable >> variable.... and so on ;
>> is extraction operator, input operator or get from operator, and is an overloaded right shift operator.


*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    cin >> a >> b;//Takes a and b as input. Notice how we do not use %d and %f conversion operators and implicit conversion happens.
    // Also we needn't use & address operator while taking input from user on console screen.
    cout <<"\n\nOutput integer is : " << a << endl <<"Output float is : "<< b;
    // When taking in multiple values in one go using cin>>a>>b we can either press Enter or Space or Tab to enter second value but comma
    // is not allowed.


    /*  Manipulators in C++

    Most of the manipulators in C++ belongs to <iomanip.h> header file.
    Manipulators are used for formatted output. There are 2 types of manipulators, which are as follows :
    (i).  Manipulator operators : endl, ends
    (ii). Manipulator functions : setw(),setfill(),setprecision(),setiosflags()

    Whenever we are working with manipulator operators there is no need for <iomanip.h>.
    Whenever we are working with manipulator functions then <iomanip.h> is mandatory.
    All the manipulators are working on cout and cout is used for formatted output.
    When <iomanip.h> is there then we do not need <iostream.h>, as iomanip works on cout and internally has all functionalities of iostream.

    Operators and their use :
    1. endl : endl is a manipulator while \n is a back slash character.
              Every back slash character takes one byte memory, but endl doesn't occupies any memory.
        We can use \n after the text but for endl it is compulsory to have insertion operator <<.

    2. ends : ends is used to put in space between 2 values while displaying them on screen.
    */


    return 0;
}

//  Next : Manipulator Functions.