// 15-Function with default arguments in C++
/*

Code for function with arguments which will throw error due to less or no arguments being passed to function :

/*
#include <iostream>
using namespace std;
int sum(int x, int y, int z); // Function declaration and should end with ; due to prototyping. Function sum here takes 3 parameters.
// Function prototype should match with function definition.
int main()
{
    cout<<"Sum = " << sum(10,20,30)<<endl; // Decreasing the arguments being passed to the function.
    cout<<"Sum = " << sum(10,20)<<endl; // Function call not matching with prototype or definition, due to 1 less number of arguments.
    cout<<"Sum = " << sum(10)<<endl; // Same error of lack of number of arguments
    cout<<"Sum = " << sum()<<endl;//Gives error in C compiler, this and above 2 lines which are having less number of arguments.
// To solve the problem of lack of arguments or no arguments concept of Function with default arguments in C++ was introduced.

}
*/

/* According to the concept of function with default arguments what we can do is we can declare the functions with default values of
arguments, so that even if there is less number of arguments or no arguments then those are replaced by their default values. */
// Code for Function with default arguments
/*
#include <iostream>
using namespace std;
int sum(int x= 1, int y=2, int z=3);
// Default parameters should be initialized at the time of function declaration.

int main()
{
    cout<<"Sum = " << sum(10,20,30)<<endl; // X becomes 10, y 20 and z 30 giving us a result of 60.
    cout<<"Sum = " << sum(10,20)<<endl;// X becomes 10, y 20 and z 3 as it is missing giving us a result of 33.
    cout<<"Sum = " << sum(10)<<endl;// X becomes 10, y 2 and z 3 giving us a result of 15. Similarly here as well missing values
    //becomes default values defined in function definition.
    cout<<"Sum = " << sum()<<endl;// All parameters are missing so 1 2 and 3 are allocated to x y and z. Sum = 6
    //So, it is evident that C++ allows to define a function without passing all the arguments, and is called function with default arguments.
    return 0;

}

*/
/* Examples of function with default arguments.
Say there is a class and 60 students are there, with each student having ID numbers,name and course_enrolled.
Name and ID number will change definitely for every student but course_enrolled remains same for every student, if there was no
default argument then for 60 students we have to feed course_enrolled again and again.

.NET supports function with default arguments concept as well.
// Function with default arguments supports the idea of function polymorphism.
Function Polymorphism : Same function being used in different ways. Something we will see in OOP in C++.

Rules for Function with default arguments :
1. Value should be sent from right to left.
*/

#include <iostream>
using namespace std;
float si(float p, float t, float r = 3)
{
    return (p*t*r)/100;
}

int main()
{

    cout<<"SI is : "<<si(1000,4,5)<<endl; // Output = 20000
    cout<<"SI is : "<<si(1000,4)<<endl; // Output = 12000

}