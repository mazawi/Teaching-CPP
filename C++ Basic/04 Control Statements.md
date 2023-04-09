# 4	Control Statements
## 4.1	if-else if-else 
### 4.1.1	if statement
-	if is used to check a specific condition whether it is True or False 
-	it allow the programme to execute the following code if the code is true and ignore it if the condition is false
-	used when the execution of some code depends on some conditions

![image](https://user-images.githubusercontent.com/45329653/230795711-b7a9e5b8-9112-4acd-a491-0e44ff1f1a0f.png)

Code ‎4 1:  using if statement to find if an integer is positive
Code
```C++
#include <iostream>
using namespace std;
int main() 
{
  int x = 20;
  if (x>0)
    {
    cout<<"The number is positive"<<endl;
    }
  return 0;
}
```
Execution

The number is positive

**You can use a block of code after if such as:**

```C++
if (x>0)
    {
    cout<<"The number is positive"<<endl;
    }
```
**However, if there is only one line of code you can remove the curly braces { }.**

![image](https://user-images.githubusercontent.com/45329653/230795911-cc3fd00d-3f10-4af5-8e82-b6a3d6062215.png)

### 4.1.2	if – else 

![image](https://user-images.githubusercontent.com/45329653/230795962-342b31ce-303e-4390-a7ac-965813bf9000.png)

Code ‎4 2:  Write a programme that reads two numbers x and y and check if x is greater, less than, or equal to y
Code
```C++
#include <iostream>
using namespace std;
int main() 
{
  int x, y;
  cout<<"Enter x: ";
  cin>> x;
  cout<<"Enter y :";
  cin>> y;
  if (x<y) cout <<"x is less than y\n";
  else if (x>y) cout <<"x is greater than y\n";
  else cout <<"x is equal to y\n";
  return 0;
}
```
Execution

Enter x: 8

Enter y :7

x is greater than y

Exercises:
1-	Write a programme that test whether the number is odd or even,
2-	Write a programme that checks whether the number is multiple of 7 or not, 

## 4.2	While Loops
![image](https://user-images.githubusercontent.com/45329653/230796045-4b994a8b-6b4e-4040-81e6-659c1f2820f6.png)

Code ‎4 3:  write a programme that reads integers continuously and prints them. The programme stops when the user enters -99.
Code
```C++
#include <iostream>
using namespace std;

int main()
{
    int N=0;
    while (N !=-99)
    {
        cout<<"Enter an integer: ";
        cin>> N;
        cout<<"You have entered: "<< N<<endl;
    }
    cout <<"End of Execution";
    return 0;
}
```
## 4.3	For loop

![image](https://user-images.githubusercontent.com/45329653/230796098-4c8874db-8ed7-499d-b03d-1f6d583be302.png)

![image](https://user-images.githubusercontent.com/45329653/230796108-b34e83c2-4a6c-4bcf-aa34-c95ce5234f50.png)

Code ‎4 4:  A programme that reads 10 integer numbers and prints them to the screen
Code
```C++
#include <iostream>
using namespace std;
int main()
{
  int cnt;
  int n;
  for (cnt = 0; cnt <10; cnt++)
  {
      cout<<"Enter an integer number: ";
      cin>>n;
      cout<<"The number is: "<<n<<endl;
  }
}
```
**Execution**
```C++
Enter an integer number: 1
The number is: 1
Enter an integer number: 4
The number is: 4
Enter an integer number: 6
The number is: 6
Enter an integer number: 7
The number is: 7
Enter an integer number:  ……………
```
## 4.4	Counters
In each counter you should specify the following:
1-	Initial value
2-	Stop criteria
3-	Update
### 4.4.1	Bottom-up
Bottom-up counters are the counters that starts with the small initial value and increase to reach a larger limit and the update is increment.

For example, for the counter that counts from 10 to 21 with step of 1:
1-	Initial value is 10
2-	Stop criterion is when the counter greater than 21
3-	Update is increasing the counter by 1
### 4.4.2	Top-down
Top-down counters are the counters that starts with the larger initial value and decrease to reach a smaller limit and the update is decrement.

Example 2: for the counter which counts 123, 120, 117 … 1
1-	The initial value is 123, 
2-	The stop criterion is when the counter less than 1
3-	The update is decreasing the counter by 3

## 4.5	Know vs unknow number of counts
### 4.5.1	Known number of counts
If you know the number of counts you can easily use for loop for that.

**Example: the average of the marks of 10 students**
### 4.5.2	Unknown number of counts
If you do not know the number of counts, you need to specify a stop criterion that breaks the counter when it occurs.

**Example: the average of the marks of unspecified number of students**
## 4.6	break and continue instructions
### 4.6.1	break
-	break is used to break a loop and ignore all the rest iterations

```C++
#include <iostream>
using namespace std;

int main()
{
    int x;
  while (true)
  {
      cout<<"Enter a number: ";
      cin>> x;
      if (x == 100) 
      {
          cout << "Loope terminated";
          break;
      }
      cout<< x<<endl;
  }
}
```

**Execution**
```C++
Enter a number: 3
3
Enter a number: 4
4
Enter a number: 2
2
Enter a number: 100
Loope terminated 
```

### 4.6.2	continue 
ignore the rest of instructions in the current iteration
Code ‎4 12:  
```C++
#include <iostream>
using namespace std;

int main()
{
    int x;
  while (true)
  {
      cout<<"Enter a number: ";
      cin>> x;
      if (x == 100) 
      {
          cout << "invalid number, try again\n";
          continue;
      }
      cout<< x<<endl;
  }
}
```
**Execution**
```C++
Enter a number: 3
3
Enter a number: 6
6
Enter a number: 100
invalid number, try again
Enter a number: 3
3
Enter a number: 
```

## 4.7	Exercise:
1-	Write a programme that reads the marks of the unknown number of students and prints them, the programme stops execution when the user enters -15.

2-	Write a programme that reads the marks of the unknown number of students and prints them, the programme ignores any invalid mark.

3-	Using the code written in (1) and (2), write a programme that reads the marks of unknown number of students and prints them, the programme ignores any invalid mark and stops execution when the user enters -15.

## 4.8	switch structure
-	if you have more than one option 

![image](https://user-images.githubusercontent.com/45329653/230796466-9ec3fbc6-41fa-4db2-ac27-e94b38317375.png)

Code ‎4 16:   A programme that reads an integer (1, 2, 3) and prints the corresponding number in words. The programme prints invalid number if the number is not one of the mentioned numbers
Code
```C++
#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter an integer: ";
  cin>> x;
  switch (x)
  {
      case 1:
      cout<<"One"<<endl;
      break;
      case 2:
      cout<<"Two"<<endl;
      break;
      case 3:
      cout<<"Three"<<endl;
      break;
      default:
      cout<<"Invalid entry"<<endl;
  }
}
```

Code ‎4 17:  
Code
```C++
#include <iostream>
using namespace std;
int main()
{
  double N1, N2, R;
  char op;
  cout<<"Enter The first number: ";
  cin>> N1;
  cout<<"Enter The Second number: ";
  cin>> N2;
  cout<<"Enter The operation (+, -, *, /): ";
  cin>> op;
  switch (op)
  {
      case '+':  // '+' as + is a character you have to use ''
      R = N1+N2;
      break;
      
      case '*':  
      R = N1*N2;
      break;
      case '/':  
      R = N1/N2;
      break;
      case '-':  
      R = N1-N2;
      break;
      default:
      cout <<"Invalid Operation"<<endl;
  }
  cout << "The result is: "<< R;
}
```


