# 6	Standard Libraries
C++ provides standard libraries that perform specific operations such as cmath, stdlib, iostream, etc.
These libraries can be included in the programme using #include 
## 6.1	cmath standard library
This library includes mathematical functions that can be used to perform mathematical operations such as exponential, power, square root, and many others.
Code ‎6 1:  
Code
```C++
#include <iostream> 
#include <cmath> 
using namespace std;

int main() 
{
    double x = 5;
    double y = 2;
    double r = pow(x,y);
    cout<<r<<endl; 
}
```
Execution
```C++
25
```
