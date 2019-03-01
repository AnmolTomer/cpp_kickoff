// 14-Reference data type in C++

/*
In C language we would be using local variables, global variables etc. Along with these in C++ there is reference variables as well.
Reference is a new derived data type and such variables are called reference variables.
We use pointers in functions and based on these functions are divided into 2 types i.e. on the basis of ways to pass parameters to the
functions which are : Call by value and call by address.
Along with this there is call by reference in C++.
Reason it is introduced is because in C language when the call by address is passed we have to declare formal parameter as a pointer.
Pointer always stores the address of another variable, but problem with pointer is we can initialize any variable address in future, or
we can assign variable address of any other variable later in the code. Due to this pointers stores which variable address is being
stored in the pointer gets hard to know for the programmer. That is the reason why reference data type or reference variables were
introduced in C++.
AKA Link Variables or Alias variables.
Reference Variables allows the programmer to provide alias names for existing variables.
Reference variables are very useful in copy constructor and operator overloading concepts.
These are implicit constants. Hence reference variable has name read only pointer too.

Syntax :
datatype &variable = variable;
e.g. int a : means a of integer type is created with value undefined at the instant of creation.
     int &a = 100; : Now a is a reference variable from primitive datatype i.e. int we are deriving the reference variable.
     //Due to this reason reference variable is derived data type.

Every reference variable should be initialized with another variable value. It is compulsory to do so.
e.g.
int a = 100, &b = a; // b value gets initialized with a.

Reference variables should be initialized at the time of declaration only, further initializations are not allowed.
Due to this reference variables are secure as user cannot change the address at random.

*/

/* Example 1

#include <iostream>
using namespace std;
int main()
{
    int a = 100; // Normal variable
    int &b = a; // Reference variable b referring to a.
    int &c = b; // Reference variable c referring to b.
    cout<<a<<b<<c<<endl; // 100 100 100
    c = 200;
    cout << a << b << c; // 200 200 200
    return 0;

}*/
// Reference variables also allows you to share data between functions. In C we use call by address technique. Here we are using call by reference
// technique for sharing data berween functions.

// 02. Call by address example.
/*
#include <iostream>
using namespace std;


void swap(int *a, int *b) // Call by address being used so we use pointers.
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a,b;
    cout << "Enter the value of a : " << endl;
    cin>>a;
    cout << "Enter the value of b : "<<endl;
    cin>>b;
    cout<<"\n\nCurrent values of a and b are \n"<<"\ta = "<<a<<"\t b = "<<b;
    swap(&a,&b); // Adderss being passed as parameter.
    cout<<"\n\nValues after swap are \n"<<"\ta = "<<a<<"\t b = "<<b;
    return 0;
}

*/

// 03. Call by reference example

/*
Reference variables are also called implicit pointer constant and we can't change the address second time.
a and b are local variables in main but still they are passed to function swap and when a and b values are changed inside the
function swap, it gets reflected in main also, i.e. reference variables allow sharing of data.
*/
#include <iostream>
using namespace std;
void swap(int &a, int &b) // Call by reference being used so we ampersand & operator.
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a,b;
    cout << "Enter the value of a : " << endl;
    cin>>a;
    cout << "Enter the value of b : "<<endl;
    cin>>b;
    cout<<"\n\nCurrent values of a and b are \n"<<"\ta = "<<a<<"\t b = "<<b;
    swap(a,b); // Adderss being passed as parameter.
    cout<<"\n\nValues after swap are \n"<<"\ta = "<<a<<"\t b = "<<b;
    return 0;
}
