# 5	Functions
## 5.1	Definition 
- Functions
- Allow the programmer to modularize a program
- Local variables
- Known only in the function in which they are defined
- All variables declared in function definitions are local variables
- Parameters
- Local variables passed when the function is called that provide the function with outside information
- Create customized functions to
- Take in data
- Perform operations
- Return the result
- Format for function definition:

```C++
return-value-type  function-name( parameter-list )
{
   declarations and statements
} 
```
•	Example:
```C++
int square( int x)
{
Int r = x*x;
return r;
}
```
## 5.2	Types of functions
1.	Does not take arguments and does not return values
2.	Takes arguments and does not return values
3.	Does not take arguments and returns values
4.	Takes arguments and returns values

![image](https://user-images.githubusercontent.com/45329653/230844307-9e9af641-eae2-4370-b74f-3a99c6c45c50.png)


### 5.2.1	Type 1 Functions: 
This function does not take any arguments and does not return any values when it is called. 
![image](https://user-images.githubusercontent.com/45329653/230844418-2f86f012-f4fc-4c01-8f14-e009330cc276.png)

 
Code ‎5 1:  (Type 1) Write a function that prints a welcome message to the screen when it is called
Code
```C++
#include <iostream>
using namespace std;
// This code is part of OOP course by Dr M. Al-Azawi
void SayHi ()
{
    cout<<"Welcome to C++ course\n ";
}
int main()
{
 SayHi();
}
```
Execution
```C++
Welcome to C++ course
```

### 5.2.2	Type 2 Functions: 
This function takes arguments and does not return any values when it is called. 
 
![image](https://user-images.githubusercontent.com/45329653/230844650-4a2b5d93-b332-4260-b1f7-29f996ff8b7e.png)

 
Code ‎5 2:  A function which reads an integer and returns it to the main function (Type 2)
Code
```C++
#include <iostream>
using namespace std;
// This code is part of OOP course by Dr M. Al-Azawi
int ReadInt ()
{
    int x;
    cout<<"Enter an Integer: ";
    cin>> x;
    return x;
}
int main()
{
  int y = ReadInt();
  cout << "The integer is: "<< y;
}
```
Execution
```C++
Enter an Integer: 6
The integer is: 6 
```

### 5.2.3	Type 3 Functions: 
This function does not take arguments and returns values when it is called. 
 ![image](https://user-images.githubusercontent.com/45329653/230844779-86d3698f-231b-4220-8d6f-b4f4131ed49a.png)


### 5.2.4	Type 4 Functions: 
This function takes arguments and returns values when it is called. 
 ![image](https://user-images.githubusercontent.com/45329653/230844847-615797cc-6fca-4b51-9d12-702676d5323a.png)

## 5.3	Passing Arguments to the Function
One or more arguments can be passed to the function, usually, these functions are of types 3 and 4. The following example shows in a function that receives an integer and printst it to the screen.
Code ‎5 3:  A function which receives an integer from the main function and print it (Type 3)
Code
```C++
#include <iostream>
using namespace std;
// This code is part of OOP course by Dr M. Al-Azawi
void PrInt (int x)
{
    cout<<"you have passed the integer: "<< x <<" to the function"<<endl;
}
int main()
{
  int y = 7;
  PrInt(y);
  return 0;
}
```
Execution
```C++
you have passed the integer: 7 to the function
```


## 5.4	Default Values
Code ‎5 4:  Default value example
Code
```C++
#include <iostream>
using namespace std;
int square (int x = 2)
{
    return x *x;
}
int main() 
{
    int x = 5;
    int y = square(x);
    cout<<y<<endl;
    y = square();
    cout<<y;
}
```
Execution
```C++
25
4
```
If the user does not pass any value to the function, the function will consider the default value which equals to 2 in this case.
## 5.5	Template
Template is used if it is required to use the same function for different types of variables. 
The following example shows a function written using template (T)
Code ‎5 5:  using template in functions
Code
```C++
#include <iostream>
using namespace std;

template < class T >
T square( T value1 )
{
   return value1 * value1;
}
int main() {
    int x = 5;
    int y = square(x);
    cout<<y;
    
    double a = 4.5;
    double b = square(a);
    cout <<"\n"<<b;
    return 0;
}
```
Execution
```C++
25
20.25
  ```

Write a programme that have a function for each arithmetic operation (+, -, *, /). The programme asks the used to enter two integers and the operation the user wants to apply and print the result.
Code ‎5 6:  
Code
```C++
#include <iostream>
using namespace std;
int add (int x, int y)
{
    return x+y;
}
int sub (int x, int y)
{
    return x-y;
}
int mul (int x, int y)
{
    return x*y;
}
int div1 (int x, int y)
{
    return x/y;
}
int main()
{
    int a, b, r;
    int op = 0;
    cout <<"Enter the first number: ";
    cin>> a; 
    cout <<"Enter the Second number: ";
    cin>> b;
    cout<<"Enter the operation: \n 1 for addition \n 2 for Subtraction";
    cout <<"\n 3 for Multiplication \n 4 for division\n Enter your choice: ";
    cin >> op;
    if (op ==  1)
    {
     r = add(a, b);
     cout <<"The result is: "<< r;
    }
    
    else if (op ==  2)
    {
     r = sub(a, b);
     cout <<"The result is: "<< r;
    }
    
    else if (op ==  3)
    {
     r = mul(a, b);
     cout <<"The result is: "<< r;
    }
    else if (op ==  4)
    {
     r = div1(a, b);
     cout <<"The result is: "<< r;
    }
   else
   {
       cout <<"You did not enter a valid operation"<<endl;
   }
   
   return 0;
}
```

Execution
```C++
Enter the first number: 7
Enter the Second number: 3
Enter the operation: 
 1 for addition 
 2 for Subtraction
 3 for Multiplication 
 4 for division
 Enter your choice: 4
The result is: 2 
```
## 5.6	Exercises
1.	Write a function to find the Max of three numbers
2.	Write a function to calculate the factorial of a number
3.	Write a function that takes a number and checkswhether  the number is prime or not
4.	Write a program to print the even numbers in a given range
5.	Write a function that takes the GPA of a student and returns the Grade (fail, sat, good, very good, or excellent)
6.	Write a function that takes the population and the increase rate of a specific country and the number of years and returns the population after the specified number of years.
7.	Write a function that takes the width and the height of a rectangle and returns the area and perimeter
8.	Write a function that takes the name of the bank customer and the balance he/she has in his account and prints them. The function prints 0 in the amount of the function that did not get the amount.
9.	Write a function to determine the maximum of two integers x and y. 
10.	Write a function that returns true if the given number n is odd, otherwise, it must return false. Use the function in the main function to test whether a number is even or not.
11.	Write a function that returns the power of a number e.g., xy  
12.	Write a programme that has a function for each arithmetic operation (+, -, *, /). The programme asks the user to enter two integers and the operation the user wants to apply and print the result
