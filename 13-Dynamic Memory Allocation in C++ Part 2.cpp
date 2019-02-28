// 13-Dynamic Memory Allocation in C++ Part 2
/*

Creating a 2 dimensional dynamic array using new operator

mxn Array where m = Number of Rows, n = Number of columns
Here we have to create a dynamic pointer i.e. dynamic 2D array, then we need double pointer to maintain rows and column address,
we have to go for array of pointers, as array stores several values at one place.

Let's understand this more intuitively, array = used to store several values at one place.
Pointer = Used to store address of another variable.
Here we need to store both row address as well as column address, that's why we need to have array of pointers.
When array of pointers is used then under one name we can store several addresses.
*/

#include <iostream>
using namespace std;
int main()
{
    int **ptr,nr,nc,r,c; //**p = p is a double pointer, *p stores row address and another * tells column address

    cout<<"Enter number of rows : ";
    cin>>nr;
    cout<<"Enter number of columns : ";
    cin>>nc;
    // take the values to create a nr times nc matrix.
    // Now, firstly we have to allocate the memory for rows
    ptr = new int*[nr]; // Pointer array of int type to Allocate the memory for rows
    //  Address of this array is passed to p.
    for(r=0;r<nr;r++) // 0 to number of rows times loop repeats
    {
        // Create a sub array within row 0 for columns.
        ptr[r] = new int[nc]; // Memory Allocation Done.
    }
    cout<<"Enter "<<nr<<'x'<<nc<<" Elements : ";
    for(r=0;r<nr;r++)
    {
        for(c = 0;c<nc;c++){
            cin>>ptr[r][c];
        }
    }
    cout<<"Elements of the array are : "<<endl;
    for(r=0;r<nr;r++)
    {
        for(c = 0; c<nc; c++){
            cout<<ptr[r][c]<<ends;
        }
        cout<<endl;
    }
delete ptr;
return 0;
}