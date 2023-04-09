# 2	Variables and Data types 
## 2.1	Variables
-	A variable is a name given to a memory location. 
-	The value stored in a variable can be changed during program execution.
-	all the operations are done on the variable effects that memory location.
-	In C++, all the variables must be declared before use.
-	The variable names should follow the following:
![image](https://user-images.githubusercontent.com/45329653/229933798-399bf5b4-8ed3-4cab-9d75-edb0a19bb44a.png)
  -	Starts with a letter, 
  -	No space or any special character between the letters except _
  -	Cannot start with a number
  - Case sensitive (Var is not the same as var or vAr)
![image](https://user-images.githubusercontent.com/45329653/229934005-b55255e4-0a64-44ad-872d-c39276e9dbbb.png)



![image](https://user-images.githubusercontent.com/45329653/229934141-22352b76-e998-4fce-aed9-053b52dcc4bc.png)

## 2.2	Data types
Mainly data types can be divided into 3 categories
1.	Primitive Data Types: These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char , float, bool etc. 
2.	Derived Data Types: The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely, Function, Array, Pointer, and Reference. 
3.	Abstract or User-Defined Data Types: These data types are defined by the user. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes:  Class, Structure, Union, and Enumeration.
The following table shows the main types used in C++ 
![image](https://user-images.githubusercontent.com/45329653/230785560-110216ad-9a08-42b4-b2d3-21ee3fc7dce3.png)

### 2.2.1	Integer
- Integer holds integer numbers
- Both negative and positive numbers can be used
Code ‎2 1:  Printing an integer to the screen
Code
```C++
#include <iostream>
using namespace std;
int main()
{
   int x=10;
   cout<< "the value of x is ="<< x<<endl;
   return 0;
}
```
Execution
the value of x is 10

### 2.2.2	Float
-	Can hold numbers that have fractions or floating points 
-	It can be used with real numbers
-	can represent values ranging from approximately 1.5 x 10-45 to 3.4 x 1038, 
-	can hold up to seven digits
Code ‎2 2:  Printing a float number to the screen
Code
```C++
#include <iostream>
using namespace std;
int main()
{
   float x=10.1;
   cout<< "the value of x is ="<< x<<endl;
   return 0;
}
```
Execution
the value of x is 10.1
  
## 2.3	Constant and Literals
-	Constant  or literals are values the programme cannot change
-	They can be treated as any other regular variable but their value is fixed, 
-	Can be of any data type such as int, float, double, boolean, etc. 
Code ‎2 5:  
Code
```C++
#include <iostream>
using namespace std;
#define L 10   
#define W  5
#define Msg "\nThis code is part of C++ course by Dr Mohammad Al-Azawi"

int main() {
   int a = L*W;  
   cout << a;
   cout << Msg;
   return 0;
}
```
Execution
50
This code is part of C++ course by Dr Mohammad Al-Azawi 
Constants can be defined using the keyword const
Code ‎2 6:  
Code
```C++
#include <iostream>
using namespace std;

int main() 
{
   const int L = 10;   
   const int W  = 5;
   const string Msg =  "\nThis code is part of C++ course by Dr Mohammad Al-Azawi";
   int a = L*W;  
   cout << a;
   cout << Msg;
   return 0;
}
```
Execution
50
This code is part of C++ course by Dr Mohammad Al-Azawi 

## 2.4	Exercises
1	Write a programme that reads 2 numbers and prints the sum of the two numbers

2	Write a programme that reads three numbers and prints the result of multiplying the numbers

3	Write a programme that reads your name and prints a message of welcome like Welcome Ali, if you entered Ali as the name

4	Write the code that reads a number and prints the float value of the entered number

5	Write the code that reads a string and prints the string 10 times 
