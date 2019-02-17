//  04-Object Oriented Programming Features Part 3
/*
OOP Features :

1. Class
2. Data Hiding
3. Data Encapsulation
4. Inheritance
5. Polymorphism
6. Message Communications

C++ Structure and C++ class Similarities :

(i)   User Defined
(ii)  Complex Data Type
(iii) Complex Data Type (Hetrogeneous)
(iv)  Members are private/public/protected

C++ Structure and C++ class Differences :

(i)  By default members are public in a Structure and Private in C++ class by default.
(ii) Structures are not inherited, i.e. from one structure we are not able to derive another structure.
But Classes are inherited, i.e. from one class we can declare another class or from one class we can derive another class.
(iii) Structures are used to make simple data type programs, classes are used  to build complex programs.

<------------------------------------------Class Declaration------------------------------------------>

class [class_name]
{
    Access specifier : private/public/protected
        data_member; [variables]
        member functions ; [functions]

};
declare class variables or objects before ; or inside the main, depends on programmer. class name not needed if objects are declared here

Note : In C++ class private members or functions should be accessed and modified only with a member function of the same class.
In C++, int a = 100; i.e. direct assigning of value to the private members will result in an error, so use a member function to
initialize and access members of a class which are private. Keep in mind to keep the member function public which links to the member
which is private. When members are private then they are not allowed to access via objects using dot . membership operator.

Thus, what we do in general is make the members private, but at the same time we defined functions which are public, and
these functions gives us ability to access private members.

Other ways to access a class are friend functions and pointers. More on these later.
Protected members are used only in Inheritance concept. These will be covered there.

*/

#include <iostream>
using namespace std;

class stu
{
    private:  // Access specifier
        long long int id; // data members
        char name[20];
        float fee;
    public: // Access specifier
        void get() // Private data member id ,name[20] and fee being accessed through public member function get().
        {
            cout << "Enter name of the student  : " << '\n';
            cin >> name;
            cout << "Enter ID of the student : " << '\n';
            cin >> id;
            cout << "Enter Fee : " << '\n';
            cin >> fee;
            cout <<endl<< "ID is : " << id<< '\n'<<endl;
            cout << "Name is : " << name<< '\n'<<endl;
            cout << "Fee is : " << fee<< '\n'<<endl;

        }
};
int main()
{
    stu test;  // test being the object or variable of type class.
    test.get(); // Object name being used to access the class function or data member . We can access only those which are public.
    return 0;
}