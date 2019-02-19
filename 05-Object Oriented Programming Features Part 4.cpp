// 05-Object Oriented Programming Features Part 4

/*

Accessing of class members : To do so we should declare an object from that class.

Object : To access class members. As class is just a blueprint we get the memory allocated upon creation of an object.
An object is the physical representation of a class. Class is just a logical representation of data.







*/

#include <iostream>
using namespace std;
class student {
    int id;
    char name[20];
    public:
        void get() // When including looping statements in the function then do not define it inside the class.
        {
            cout<<"Enter student ID, name  : " ;
            cin>>id>>name;
        }
        void put();
};

/*  Defining class function outside the class.
return_type class_name :: put  Tells that put() belongs to stu class.*/

void student::put()
{
    cout<<"ID = "<<id<<endl ;
    cout<<"Name = "<<name;
}
// Calling the class members. So, we declare objects now.
//  In int a,b,c; int is the class and a b c are its objects which takes up memory.
int main()
{
    student stu;
    stu.get(); // Calling the member function which is publicly defined using stu object.
    stu.put();
    return 0;
}
