// 12-Dynamic Memory Allocation in C++ Part 1
/*
In static memory allocation we define the size of data type at the time of writing code.
Main problem is that memory is not flexible and can cause problem of memory wastage or shortage.

e.g.
 int a[5] = {10,20};//10 bytes are allocated but only 4 bytes are used. Memory wastage
 int a[2] = {10,20,30};//4 bytes are allocated but 6 bytes are required. Memory shortage.

To avoid the problems arising due to static memory allocation, concept of dynamic memory allocation came into picture.
Dynamic Memory Allocation: Gives user the power to decide the size of data type be it array or character or struct at the time of running.

In C for dynamic memory allocation we had used malloc, calloc and realloc functions.
In C++ to do dynamic memory allocation we use operator new.
In C functions are used and by default their return type is void pointer and explicit typecasting is needed.
new operator doesn't needs any explicit typecasting as implicit typecasting occurs in the operator.
However, one common thing about dynamic memory allocation in C and C++ is that memory is allocated in the heap area.
Memory allocated in heap area stays permanent until user decides to use delete operator in c++ or free in C language or program is closed.
Concept of deletion from heap area is also referred to as dynamic memory deallocation.
Another prerequisite for taking advantage of dynamic memory allocation is that you should be know how to use pointers.
*/

#include <iostream>

using namespace std;

int main()
{
    int *p; // p is a pointer variable of integer type. Pointer stores memory address only of another integer type variable.
    float *q;
    char *r;
    p = new int(10); //Allocating the memory : As p is an integer type pointer, with new operator we allocate memory for integer storage.
    // On running the line above 2 bytes are allocated to integer and value 10 is stored at that memory address.
    q = new float(1.5); // 4 bytes allocated in heap area and 1.5 is stored in that area, address passed to q.
    r = new char('r');
    cout<<"Memory Addresses Allocated on running new operator : "<<endl;
    cout<<p<<endl<<q<<endl<<r<<endl;
    cout<<"Values at those memory addresses : "<<endl;
    cout<<*p<<endl<<*q<<endl<<*r<<endl;
    //  Creating Dynamic 1-D Array
    int n; // Size of array, which user gives.

    cout<<"Enter array size : "<<endl;
    cin>>n;
    int *a = new int[n];//a is an int type pointer having the address of heap area where an int array of n size is created. *a has value.
    // Say if array formed has 0th index at address 65500 then a will contain 65500 as its value and *a = *65500 i.e. value at address 65500.
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the number to be inserted at position"<<i<<" in the array : ";
        cin>>a[i];
    }
    cout<<"Array is : ";
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<"\t"<<a[i];

    }
    return 0;
}