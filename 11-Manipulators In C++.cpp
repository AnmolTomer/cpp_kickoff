// 11-Manipulators In C++

/*

We already went over manipulator operators endl and ends in file number 9.
Now we will discuss about manipulator functions. To use manipulator functions we need to include <iomanip> header file in our program.

Manipulators Functions :

1. setw() : It stands for set width . In C++ we use \t to get more spaces, but our requirement is that we want formatted output.
e.g. There is a supermarket inovice generation program where each row and column is at a particular number of spaces in a formatted way.
It allocates specified number of whitespaces on the screen. And prints the text from right to left, though in general we print from
left to right.

cout << "1\n10\n100"; // prints 1 10 and 100 in three different lines.

2. setfill() : Say we declare 5 spaces with setw() but we use only 2 and 3 spaces are empty then we can fill those with any char using
setfill('desired character') manipulator function.
NOTE : setfill() only works with setw().
to stop setfill() for some cout then we can turn it off by typing in "cout<<setfill(' ');"

3. setprecision() : When we want to round off a float, say output of a division calculation, then to truncate the output we make use
of setprecision() manipulator function.
Syntax :

cout<<setprecision(number of digits to round off to)<<calculation;

4. setbase() : Used to set the base. Say you want to print the octal number of decimal number 65.
Syntax :

Conversion of decimal number to other base number system
cout<<setbase(base you want decimal number to conver to ) << decimal_number;

Conversion of octal number to decimal number
cout<<setbase(10) << 0 followed by number you want of octal in decimal;
cout<<setbase(10) << 0101; // Gives output as 65. 0 in front of 101 signifies number being supplied is of Octal base.

Conversion of Hexadecimal number to decimal number
cout<<setbase(10) << 0x followed by number you want of octal in decimal;
cout<<setbase(10) << 0x41; // Gives output as 65. 0x in front of 41 signifies number being supplied is of Hexadecimal base.

5. setiosflags : Used to set different kinds of flags in our programs. When setw is used matter aligns from right to left.
e.g. In general names are represented from left to right. We want names to start from left but at the same time we want to
maintain equal spaces then we do following :

cout<<setw(10)<<setiosflags(ios::left)
// What above line does is that in general matter arranges from right to left when setw() is used but due to flag matter fills from left.

Using setiosflags with number system

To convert to octal:
setiosflags(ios::octal) << 65 // Gives 101 as output

*/

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    cout<<"\nExample of cout without setw : \n";
    cout<<"1\n";
    cout<<"10\n";
    cout<<"100\n";

    cout<<setfill('*');
    cout<<"Example of setw with setfill : \n\n";
    cout << setw(5)<<"1\n"; // Allocates 5 spaces on the screen and prints one at the right-most or 5th block. Text goes from right to left.
    cout << setw(5)<<"10\n";
    cout<<setfill(' '); // Turns off the setfill
    cout << setw(5)<<"100\n"; // No * with 100 in output.

    cout<<"\n\nExample of setprecision : ";
    cout<<setprecision(3)<<22/7.0<<endl; // prints 3 digits. 3.14 in this case.

    cout<<"\n\nExample of setbase : \n";
    cout<<"\nConversion of decimal number 65 to Octal using setbase is : "<<setbase(8) <<65<<endl;
    cout<<"\nConversion of decimal number 65 to Hexadecimal format using setbase is : "<<setbase(16) <<65<<endl;
    cout<<"\nConversion of octal number 101 to decimal using setbase is : "<<setbase(10) << 0101<<endl;
    // Gives output as 65. 0 in front of 101 signifies number being supplied is of Octal base.
    cout<<"\nConversion of hexadecimal number from 41 to decimal : "<<setbase(10) << 0x41<<endl;
    // Gives output as 65. 0x in front of 41 signifies number being supplied is of Hexadecimal base.
    cout<<"\nExamples of setiosflags : \n";
    cout<<setw(10)<<setiosflags(ios::left)<<"\nBale"<<endl;
    cout<<setw(10)<<setiosflags(ios::left)<<"\nChristian"<<endl;
    cout<<"\nConversion of decimal number 65 to Octal using setiosflags is : "<<setiosflags(ios::oct) << 65<<endl; // Gives 101 as output
// What above line does is that in general matter arranges from right to left when setw() is used but due to flag matter fills from left.
    cout<<"\nConversion of decimal number 65 to Hexadecimal using setiosflags is : "<<setiosflags(ios::hex) << 65<<endl;
    cout<<"\nConversion of octal number 101 to decimal using setiosflags is : "<<setiosflags(ios::dec) << 0101<<endl;
    cout<<"\nConversion of Hexadecimal number 41 to decimal using setiosflags is : "<<setiosflags(ios::dec) << 0x41<<endl;

    cout<<"Showpoint for displaying decimal number number : "<<setiosflags(ios::showpoint)<<22/7.0<<endl; //Expected to show 3.142...
    cout<<"Showpos for positive number : "<<setiosflags(ios::showpos)<<100<<endl; // Shows + symbol in front of 100. Works only with positive numbers.
    cout<<"Showpos for negative number : "<<setiosflags(ios::showpos)<<-100<<endl; // Won't show + sign here as the number is -ve.
    cout<<"Scientific in seriosflags for displaying number in scientific notation : "<<setiosflags(ios::scientific)<<234.45646446554<<endl;
    // cout<<"To get original value from scientific notation : "<<setiosflags(ios::scientific)<<2.345e+02; // Not working due to some reason. Needs to be fixed.
return 0;

}