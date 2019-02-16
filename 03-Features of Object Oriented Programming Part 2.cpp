//  03-Features of Object Oriented Programming Part 2

/* OOP Features :
1. Class
2. Data Hiding
3. Data Encapsulation
4. Inheritance
5. Polymorphism
6. Message Communications

<------------------------------------------1. Class------------------------------------------>

It is extension of C structure. In C structure is a collection of hetrogeneous variables.
Structures are the foundations of OOP concepts. Class is derived from C structure.

Structure : User defined data type. Collection of primitive and derived data types.

Motivation behind switching to Class from Structures :
In C language the structure by default in public and is accessible from anywhere in the program, by any member function
leading to security issues as the complexity and size of code increases. Thus, structure data is not protected.

To avoid this problem class was included in C++, though we have structure in C++ as well.

Difference between structure of C and C++ :
    In C language inside the structure we are able to declare only the variable be it of primitive or derived data type and these are
    called structure members.

    In C++ inside the structure we can declare structure members as well as member functions.
    Though, it might look like structure is better to use in C++ but remember in C++ also, structure data is public.

Thus to avoid the problems and potential security, reliability and maintainability issues caused due to structures concept of Class
was introduced.

Class data i.e. member functions and class members are divided into private, public and protected type.
There's a rule in class which says that private data of a class should be accessed with member functions of the same class.

As in C++ strucuture, structure data is accessed by structures members and structure functions as well as functions and variables outside
the structure.

Members functions are simply the functions declared inside the class.
By using friend function and pointers we can access class data as well, we'll see about these later.

How a class looks like :

class MyClass
{
public/protected/private
data member;
member functions;
};
If private/public is not mentioned then by default all the members are private inside a class.
*/


#include <iostream>
using namespace std;

class stu
{
    private:  // Access specifier
        long long int id;
        char name[20];
    public:
        void get() // Private data member id and name[20] being accessed through public member function get().
        {
            cout << "Enter name of the student" << '\n';
            cin >> name;
            cout << "Enter ID of the student" << '\n';
            cin >> id;
            cout << "ID is : " << id<< '\n'<<endl;
            cout << "Name is : " << name<< '\n'<<endl;
// Data id and name are not accessed by any function outside the class stu and this is exactly what is known as data hiding.
        }
};
int main()
{
    stu test;  // test being the object or variable of type class.
    test.get(); // Object name being used to access the class function or data member . We can access only those which are public.
    return 0;
}

/*  Class is the combination of data member and member functions and both are associated together inside a class and this is precisely
what is known as data Encapsulation.
Data Encapsulation : It is the process of binding the data under associated functions together into a single unit called class.
Data Hiding : Making data member private and preventing the access from outers.

Class is a user defined data type and takes never takes up any memory as it is just the blueprint of an object.
From class we have to declare the class variables called objects to allocate memory and use, them inside our main() function.
These objects are similar to structure variables in C/C++.
Objects take up memory and that is why are called the physical representation of class.
Objects are simply variables of type class.
Analogy : Architect makes the blueprint of building and then civil engineer makes the instance of the building on the basis of blueprint.
Building is the physical representation of the blueprint.
In the Analogy above blueprint is class and building is object.
*/