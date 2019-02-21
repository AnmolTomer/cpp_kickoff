// 07-History of C++
/*

History and New features implemented in C++

C++ was invented by Danish Computer Scientist Bjarne Stroustrup in 1982.
He was then working at AT&T Bell labs as a software engineer.
C++'s initial name was C with classes.
Stroustrup was very much impressed with features of C such as function oriented language, portability,dynamic memory allocation etc.
Problem in C was that data was not secure, as it was public. Stroustrup added the concept of classes to the traditional C language.
Stroustrup added the concept of class which was a feature of a language called Simula-67 to C.
Different people were using different names for this newer Stroustrup developed version of C. To maintain uniformity and avoid
any kind of confusion among organisations ANSI came up with the name of C++ in 1983. C++ meaning C with 1 increment, hence ++.

Newly introduced Data Types in C++ :

Generally C language has Primitive Data Types(int,float,double), Derived Data Types(array,pointer,functions) and User defined Data Types.
Some of the common user defined data types that we use in C are structure, union, enum.
In C++ along with data types specified above another data type was added called boolean used using keyword bool.
bool is of type primitive data type and takes up 1 byte of memory.

In C++ another data type introduced called reference data type. It belongs to the category of Derived Data Types.
Another new data type introduced in C++ and perhaps the most important increment was of user defined data type of class.

Operands :
Generally in C there are many operators and based on the number of Operands we have 3 types of operators:
Unary, Binary, Ternary. (This system of operators is based on number of operands.)

Newly introduced operators in C++ :
1. new - In C we use malloc, calloc for dynamic memory allocation. Instead of those functions new was introduced in C++ for dynamic memory
        allocation.

2. delete - In C we have free function to erase the dynamically created memory. Delete serves that purpose in C++.
3. endl - Instead of using escape operator \n for new line, endl was introduced in C++.
4. ends - ending space, it adds space at the end of the line.
5. :: - Perhaps the most important operator in C++, and this is scope operator/scope resolution operator. This is used to specify the
        relationship with the class or object. This is also called global variable access operator.
6. *. - This is pointer to member access operator.
7. *:: -  pointer to member access operator.


Programming Structure of C++ :

// [Documentation Section - Represented by Square Brackets generally. Here we write comments, references and whatever is needed
for making maintainence of the program easy to understand. Compiler doesn't understands these comments and are optional.]

header files declaration // mandatory
global variables // optional
class declaration // optional
class definitions // optional
function declaration/prototype & definitions. // optional
main function : int main() or void main() // mandatory
other statements and function definitions. // optional
*/