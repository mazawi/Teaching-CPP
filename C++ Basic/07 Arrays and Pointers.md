# 7	Arrays and Pointers
## 7.1	Arrays
Used to store multiple values under the same variable name, it consists of the following:
-	Array name: a modifier that identifies the array and follows the same naming convention as other variables
-	Type: the type of the values the array contains
-	Index: to identify a specific value
### 7.1.1	Array definition and declaration 
<img width="368" alt="image" src="https://user-images.githubusercontent.com/45329653/230846730-a9e1c33c-9047-4303-81d3-3f0175a4e354.png">

 
-	Consecutive groups of memory locations 
-	To refer to an element, specify the Array name and position number
-	The first element is at position 0
Initialising array
 <img width="385" alt="image" src="https://user-images.githubusercontent.com/45329653/230846777-87a3d487-3fc3-44a7-99ec-5bb8f8ffa6d4.png">


Code ‎7 1:  A programme that does the following:
-	defines an array that consists of 6 integers.
-	prints the first element of the array.
-	Prints the fourth element of the array
-	Prints the last element of the array
-	Print the entire array using for loop
Code
```C++
#include <iostream>
using namespace std;
// this code is part of C++ course by Dr Mohammad Al-Azawi.
int main() 
{
    // -  defines an array that consists of 6 integers .
    int ar[6] = {1, 2, 3, 4, 5, 6};
    // -  prints the first element of the array.
    cout <<"The first element is: "<<ar[0]<<endl;
    // -  Prints the fourth element of the array
    cout <<"The fourth element is: "<<ar[3]<<endl;
    // -  Prints the last element of the array
    cout <<"The last element is: "<<ar[5]<<endl;
    // -  Print the entire array using for loop
    for (int i = 0; i<=5; i++)
    cout<<"a["<<i<<"]= "<<ar[i]<<endl;
  return 0;
}
```
Execution
```C++
The first element is: 1
The fourth element is: 4
The last element is: 6
a[0]= 1
a[1]= 2
a[2]= 3
a[3]= 4
a[4]= 5
a[5]= 6
```
### 7.1.2	Using Counters with Arrays
Code ‎7 2:  A  programme that defines an array with 6 elements and finds the sum of its element:

Code
```C++
#include <iostream>
using namespace std;
// this code is part of C++ course by Dr Mohammad Al-Azawi.
int main() 
{
    int ar[6] = {1, 2, 3, 4, 5, 6};
    int sum = 0;
    for (int i = 0; i<=5; i++)
    sum += ar [i];
    
    cout<<"The sum of the element is: "<<sum<<endl;
  return 0;
}
```
Execution
```C++
The sum of the element is: 21
  ```
Code ‎7 3:  A programme that defines an array with 6 elements and prints its elements in reverse order:
Code
```C++
#include <iostream>
using namespace std;
//This code is part of C++ course by Dr Mohammad Al-Azawi.
int main() 
{
    int ar[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i<=5; i++)    
    cout<<"a["<<5-i<<"] =" <<ar[5-i]<<endl;
  return 0;
}
```
Execution
```C++
a[5] =6
a[4] =5
a[3] =4
a[2] =3
a[1] =2
a[0] =1
  ```
Code ‎7 4:  a programme that defines two arrays A and B with 5 elements in each one. Define a third array which contains the sum of the corresponding elements 
Code
```C++
#include <iostream>
using namespace std;
// this code is part of C++ course by Dr Mohammad Al-Azawi.
int main() 
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {4, 5, 6, 7, 8};
    int C[6];
    for (int i = 0; i<5; i++) 
    C[i] = A[i] + B[i];
    
    for (int i = 0; i<5; i++) 
    {
    cout<<"C["<<i<<"] =" <<C[i]<<endl;
    }
  return 0;
}
```
Execution
```C++
C[0] =5
C[1] =7
C[2] =9
C[3] =11
C[4] =13
  ```
### 7.1.3	Size of an Array
Code ‎7 5:  a programme that finds the number of elements in an array.  
Code
```C++
#include <iostream>
using namespace std;
// this code is part of C++ course by Dr Mohammad Al-Azawi.

int main() 
{
    int A[] = {1, 2, 5, 6,7 };
    int len = sizeof (A)/sizeof(A[0]);
    cout<<"The number of elements in the array is: "<<len<<endl;
  return 0;
}
```
Execution
```C++
The number of elements in the array is: 5
  ```

### 7.1.4	Multi-dimensional Arrays
- Arrays can have more than one dimension, 
- 2-dimensional arrays are widely used,
- In 2-D array, we have rows and columns 
- 2 X 3 array means has 2 rows and 3 columns
		
![image](https://user-images.githubusercontent.com/45329653/230847210-284edfef-ec0e-4a37-98c3-7ea4aa1dd961.png)


Code ‎7 6:  a programme to define and print an array of size 2x3
Code
```C++
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {
                    {1, 2, 3},
                    {3, 4, 5}
                  };
                    
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout <<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<endl;
        }
    }
                    
    return 0;
}
```
Execution
```C++
A[0][0] = 1
A[0][1] = 2
A[0][2] = 3
A[1][0] = 3
A[1][1] = 4
A[1][2] = 5
 ```

Code ‎7 7:  a programme to define an array of size 3x3 and print the elements on the diagonal of the array
Code
```C++
#include <iostream>
using namespace std;
int main()
{
    int A[3][3] = {
                    {1, 2, 3},
                    {3, 4, 5},
                    {5, 6, 7}
                    };
                    
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if (i == j)
            cout <<A[i][j]<<"\n";
        }
        
    }                
    return 0;
}
```
Execution
```C++
1
4
7
```



Code ‎7 8:  a programme to define an array of size 2x3 and print it as a regular array
Code
```C++
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {
                    {1, 2, 3},
                    {3, 4, 5}
                    };
                    
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout <<A[i][j]<<"\t";
        }
        cout <<"\n";
    }                
    return 0;
}
```
Execution
```C++
1	2	3	
3	4	5	
  ```

-	In the diagonal both indexes are equal
Exercises: 
1- Write a programme to define an array of size 3x3 and print the elements below the diagonal of the array.

2- Write a programme to define an array of size 3x3 and print the elements above the diagonal of the array.

3- Write a programme to define an array of size 3x3 and print the sum of the diagonal elements.

4- Write a programme to define 2 arrays of size 3x3 and save the result of adding them to each other in a third array.

Answers:
Code ‎7 9:  Exercise 1
Code
```C++
#include <iostream>
using namespace std;
//This code is part of C++ courses by Dr Mohammad Al-Azawi
int main()
{
    int A[3][3] = {
                    {1, 2, 3},
                    {3, 4, 5},
                    {5, 6, 7}
                    };
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if (i > j)
            cout<<A[i][j]<<endl;
        }
        
    } 
    return 0;
}
```
Execution
```C++
3
5
6
  ```
Code ‎7 10:  Exercise 2
Code
```C++
#include <iostream>
using namespace std;
//This code is part of C++ courses by Dr Mohammad Al-Azawi
int main()
{
    int A[3][3] = {
                    {1, 2, 3},
                    {3, 4, 5},
                    {5, 6, 7}
                    };
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if (i < j)
            cout<<A[i][j]<<endl;
        }
        
    } 
    return 0;
}
```
Execution
```C++
2
3
5
  ```
Code ‎7 11:  Exercise 3
Code
```C++
#include <iostream>
using namespace std;
//This code is part of C++ courses by Dr Mohammad Al-Azawi
int main()
{
    int A[3][3] = {
                    {1, 2, 3},
                    {3, 4, 5},
                    {5, 6, 7}
                    };
    int sum = 0;                    
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if (i == j)
            sum +=A[i][j];
        }
        
    } 
    cout<<"The sum of the diagonal elements is: "<<sum<<endl;
    return 0;
}
```
Execution
```C++
The sum of the diagonal elements is: 12
  ```
Code ‎7 12:  Exercise 4
Code
```C++
#include <iostream>
using namespace std;
//This code is part of C++ courses by Dr Mohammad Al-Azawi
int main()
{
    int A[3][3] = {
                    {1, 2, 3},
                    {3, 4, 5},
                    {5, 6, 7}
                    };
                    
     int B[3][3] = {
                    {1, 2, 3},
                    {3, 4, 5},
                    {5, 6, 7}
                    };
                    
    int C[3][3]={0};
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<"\t";            
        }
        cout<<endl;
    } 
    return 0;
}
```


## 7.2	Pointers
- A pointer is a variable that stores the memory address of an object. 
- It can be used for many purposes such as:
  * to allocate new objects in the memory,
  * to pass functions to other functions
  * to iterate over elements in arrays 
  * it is widely used in data structures.
•	
Code ‎7 13:  
Code
```C++
#include <iostream>
using namespace std;
int main()
{
  int x = 5;
  cout<<"The value of x is: "<< x<<endl;
  cout<<"The Address of x is: "<< &x<<endl;
  int * xptr = &x;
  cout<<"The value of xptr is: "<< xptr<<endl;
  cout<<"The contents of xptr is: "<< *xptr<<endl;
  return 0;
}
```
Execution
```C++
The value of x is: 5
The Address of x is: 0x707b79174fdc
The value of xptr is: 0x707b79174fdc
The contents of xptr is: 5
  ```
Code ‎7 14:  
Code
```C++
#include <iostream>
using namespace std;
int main()
{
  int x = 5;
  cout<<"The value of x is: "<< x<<endl;
  int * xptr = &x;
  *xptr = 7;
  cout<<"The value of x is: "<< x<<endl;  
  
  return 0;
}
```

Execution
```C++
The value of x is: 5
The value of x is: 7

```
