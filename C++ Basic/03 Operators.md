# 3	Operators
## 3.1	Arithmetic Operators

![image](https://user-images.githubusercontent.com/45329653/230787185-3cc6c8c9-b782-44c1-b2e5-a402970da293.png)

- The arithmetic operators mentioned above can be used with integer and real numbers except for % which should be used with integers only.
- The division operator (/) it produces the result of the division of the two operands normally. 
- When it is used between two integers a / b, the result is the whole number of the divisor (b) in the dividend (a). 
- The remainder of the division is obtained by the modulus %.

Code ‎3 1:  Using addition operation to find the result of the sum of three integers
Code
```C++
#include<iostream>
using namespace std;
 // This code is part of C++ course by Dr M. Al-Azawi
int main()
{
    int x1 = 5;
    int x2 = 10;
    int x3 = 7;
    int result;
    result = x1 + x2 + x3;
    cout<<"The sum of the three numbers is: " << result << endl;
    return 0;
}
```
Execution

The sum of the three numbers is: 22

### 3.1.1	Applying division to Integers and Real Numbers
Code ‎3 2:  
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main() 
{
    int x, y;
    x = 7;
    y = 2;
    // printing the sum of x and y
    cout << "x + y = " << (x + y) << endl;
    // printing the difference of x and y
    cout << "x - y = " << (x - y) << endl;
    // printing the multiplication of x and y
    cout << "x * y = " << (x * y) << endl;
    // printing the division of x by y
    cout << "x / y = " << (x / y) << endl;
    // printing the modulo of x by y
    cout << "x % y = " << (x % y) << endl;
    return 0;
}
```
Execution

x + y = 9

x - y = 5

x * y = 14

x / y = 3

x % y = 1

Code ‎3 3:  Example shows the difference between integer and real numbers division 
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{
  // This is an example on integer and float division
  int x = 5;
  int y = 3;
  int r = x/y;
  cout<< " the result when applying division to INTEGERS is: "<< r<<endl;
  return 0;
}
```
Execution

the result when applying division to INTEGERS is: 1

Code ‎3 4:  
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{
  // This is an example on integer and float division
  
  double x = 5;
  double y = 3;
  double r = x/y;
  cout<< " the result when applying division to REAL NUMBERS is: "<< r<<endl;
  
  return 0;
}
```
Execution
the result when applying division to REAL NUMBERS is: 1.66667


### 3.1.2 Modulus operator (%):
	It should be applied to integers only
  
	Returns the remainder of the division 
  
	Ex: 5/3  = 1  2/3  then the result of 5%3 is 2
  
Code ‎3 5:  
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{
  int x = 5;
  int y = 3;
  int r = x%y;
  cout<< " the result when applying % is: "<< r<<endl;
  
  return 0;
}
```
Execution
the result when applying % is: 2


### 3.1.3	Execution Sequence 
The sequence of executing the operators is as follows:
1-	Between the parentheses
2-	Multiplication, division, and modulus
3-	Addition and subtraction
Code ‎3 6:  
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{  
  int r = (5 + 2) * 4 * 3 + 1;
  cout<< " the result  is: "<< r<<endl;
  return 0;
}
```
Execution
the result  is: 85

In the above example the execution is as follows:

1-	5 + 2  = 7

2-	(7) * 4 * 3  = 84

3-	84 + 1 = 85


## 3.2	Bitwise Logical operations
Operators that applied to the binary representation of the numbers. 
The following table shows the bitwise operators.

![image](https://user-images.githubusercontent.com/45329653/230787670-3a245d57-3530-4fda-a83c-d5f005927bb9.png)

Code ‎3 7:  Bitwise AND operator
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{
    int x = 5;
    int y = 3;
    int r = x & y;
  cout<< " the result  is: "<< r<<endl;
  return 0;
}
```
Execution

the result  is: 1

In the above example:

1-	x = 0000 0101

2-	y = 0000 0011

3-	r = 0000 0001 

Code ‎3 8:  Bitwise OR operator

Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{
    int x = 5;
    int y = 3;
    int r = x | y;
  cout<< " the result is: "<< r<<endl;
  return 0;
}
```
Execution

the result  is: 

Code ‎3 9:  Bitwise XOR operator
Code
```C++
#include <iostream>
using namespace std;
// This code is part of C++ course by Dr M. Al-Azawi
int main()
{
    int x = 5;
    int y = 3;
    int r = x ^ y;
  cout<< " the result  is: "<< r<<endl;
  return 0;
}
```
Execution

the result  is: 

Code ‎3 10:  Bitwise right shift operator
Code
```C++
#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 3;
    int r = x >> y;
  cout<< " the result  is: "<< r<<endl;
  return 0;
}
```
Execution

the result  is: 

Code ‎3 11:  Bitwise Left shift operator
Code
```C++
#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 3;
    int r = x << y;
  cout<< " the result  is: "<< r<<endl;
  return 0;
}
```
Execution

the result  is: 

## 3.3	Assignment operations

-	They can be used only when the result is one of the operands 
Code ‎3 12:  
Code
```C++
#include <iostream>
using namespace std;
// This example is part of PSPL code by Dr M. Al-Azawi
// Example on assignment operators
int main()
{
  int x = 5;
  cout<<"The value of x is: "<<x<<endl;
  x += 4; // Equivalent to  x = x + 4
  cout<<"The value of x after adding 4 is : "<<x<<endl;
  x++;  //Equivalent to  x = x + 1
  cout<<"The value of x after post increment is : "<<x<<endl;
  ++x;  //Equivalent to  x = x + 1
  cout<<"The value of x after pre increment is : "<<x<<endl;
  x *= 2; // Equivalent to  x = x * 2
  cout<<"The value of x after multiplying it by 2 is : "<<x<<endl;
  return 0;
}
```
Execution
The value of x is: 5

The value of x after adding 4 is : 9

The value of x after post increment is : 10

The value of x after pre increment is : 11

The value of x after multiplying it by 2 is : 22


Code ‎3 13:  
Code
```C++
#include <iostream>
using namespace std;
// This example is part of PSPL code by Dr M. Al-Azawi
// Example on assignment operators
int main()
{
  int x = 5;
  cout <<"Applying post increment \n____________________________\n"<<endl;
  cout<<"The value of x is: "<<x<<endl;
  cout << "post increment: "<<x++<<endl;
  cout <<"The new value of x is: "<< x<<endl;
  x = 5;
  cout <<"Applying pre increment \n____________________________\n"<<endl;
  cout<<"The value of x is: "<<x<<endl;
  cout << "pre increment: "<<++x<<endl;
  cout <<"The new value of x is: "<< x<<endl;
  return 0;
}
```
Execution

Applying post increment 
___________________________

The value of x is: 5

post increment: 5

The new value of x is :6

Applying pre increment 

____________________________

The value of x is: 5

pre increment: 6

The new value of x is :6

## 3.4	Comparison Operators

![image](https://user-images.githubusercontent.com/45329653/230788243-a3437b70-9fec-4a75-8f7f-20ace5bf7320.png)


## Exercises
3.1) write a programme that reads two numbers x and y and find the result of the equation r =x^2+xy^3+2y 

3.2) find the value of 6>>2 and explain the result obtained

3.3) what is the result of x=7/3 when applied to integers explain

3.4) what is the result of 7/3, when applied to real numbers explain


