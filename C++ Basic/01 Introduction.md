# 1 Introduction

This manual was developed for the users who want to use C++ as a programming language for various applications. It aims to introduce C++ programming language principles and applications.
The manual adopts Problem Based Learning approach to make you master the language, which means it uses example and problem solving in explaining the programming language.

## 1.1 Resources

As C++ is a compiled language, you need to install a compiler and an editor, or an Integrated Development Environment. Many Editors and Compilers are available but it is highly recommended to use an IDE. Online IDE are also available as will be explained below.

### 1.1.1 Microsoft Visual Studio

You can download and install MS Visual Studio from their website:
<https://visualstudio.microsoft.com/vs/features/cplusplus/>
<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931197-16e54ea8-3216-4839-acd1-e009eaa0b00c.png">

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931391-bf4b13ab-f0ba-4508-be80-b355fba42c4f.png">

Then install it and follow the recommendation in the installation wizard.

### 1.1.2 Visual Studio Code

<https://code.visualstudio.com/docs/languages/cpp>

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931287-4af4e25e-dc50-45bf-a33d-f5c8de20e017.png">

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931566-46bc52b8-7cca-4802-9fd0-c2ab902d4eec.png">

### 1.1.3 <http://cpp.sh/>  Online IDE

<http://cpp.sh/>

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931619-cadf2220-867b-49b0-aa72-4ba18a1448b6.png">

### 1.1.4 OnlineGDB Online IDE

<https://www.onlinegdb.com/online_c++_compiler>

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931686-b6bc5c3b-23ad-48d1-ae57-8ed2465f3960.png">

### 1.1.5 Tutorialspoint online IDE

<https://www.tutorialspoint.com/compile_cpp_online.php>

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931745-eb084e17-02a5-4ebd-83a2-664befa13c81.png">

### 1.1.6 Programiz Online IDE

<https://www.programiz.com/cpp-programming/online-compiler/>

 <img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/229931838-74d81251-6687-409b-834f-51648de3e988.png">

## 1.2 What is C++

* General Purpose programming language
* Compiled Programming language

## 1.3 Preparing your programme

### 1.3.1 Editors

you need the editors to edit the source code in the C++ language

## 1.4 Compilers

- C++ is a high-level language, designed to provide the ability to write and understand code for you and other developers. While a computer processor executes low-level code, so the purpose of the compiler is to translate C++ into processor hardware code.
- A single compiler may be able to target several types of processors, and if the code is standard in C++, it can be compiled with other compilers that support other processors
- The compiler compiles C++ code, and it will issue a compiler error if it comes across an error in your code. This is syntax checking of your code.
- It is important to point out that the code you write can be perfect C++ code from a syntax point of view, but it can still be nonsense.
- The syntax checking of the compiler is an important check of your code, but you should always use another checking.
- The compiler can also issue Warnings

## 1.5 Linking the code

A compiler will produce an output. For C++ code, this will be object code, but you may have other compiler outputs, such as compiled resource files.
On their own, these files cannot be executed; not least because the operating system will require certain structures to be set up.
A C++ project will always be two-stage:

1. compile the code into one or more object files and
2. link the object files into an executable. This means that your C++ compiler will provide another tool, called a linker.
The linker also has options to determine how it will work and specify its outputs and inputs, and it will also issue errors and warnings. Like the compiler, the Microsoft linker has an option,

## 1.6 Compilation and linking processes for an executable file

 <img width="260" alt="image" src="https://user-images.githubusercontent.com/45329653/229931938-58c053cf-0d15-4009-9bc1-7df22afb2359.png">

Ref. Antonio Mallia, Francesco Zoffoli, C++ Fundamentals, March 2019, Packt, ISBN 9781789801491![image](https://user-images.githubusercontent.com/45329653/229932008-abd3c362-dfb9-4cb6-96a3-e7f0673dddd8.png)

## 1.7 Example: first programme

Code ‎1 1:  first programme, printing a simple message on the screen
Code

```C++
#include <iostream>
using namespace std;
int main()
{
   cout<< "Hi there!"<< endl;
   return 0;
}
```

Execution

Hi there!

1. use the standard library iostream
2. used the standard namespace std
3. every C++ should have a main() function, only one
4. the curly braces are used to identify a block of code

## 1.8 Understanding Language Features

### 1.8.1 Comments

- Statements that are not compiled by the compiler,
- They give information about the code to the developers,
Ex 1:

```C++
// This is a single line comments
```

Ex 2:

```C++
/* This is 
a Multiple lines
comments
*/
```

Code ‎1 2:  first programme, printing a simple message on the screen
Code

```C++
#include <iostream>
using namespace std;
int main() 
{
    /*
     Student ID: 1234
     Student Name: Ali
     Department: CSMIS
     
     */
     int id; // this variable defines the student ID
     cout<<"Hi there!, I am writing C++ code";
}
```

Execution
Hi there!, I am writing C++ code

### 1.8.2 #include
![image](https://github.com/mazawi/Teaching-CPP/assets/45329653/b6409f10-003a-4eed-bd82-7573a0adcef6)

- This instruction is used to include a pre-written library such as stdlib, iostream, etc.
- If you are writing a programme that reads values from the keyboard or print values to the screen you should use iostream.

### 1.8.3 using namespace std

 ![image](https://github.com/mazawi/Teaching-CPP/assets/45329653/86473e17-dee4-4bc2-8932-86ba0b90d6df)

- A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables etc) inside it .
- This instruction is used to allow the programme understand cout and cin, otherwise you need to write them as std::count and std::cin.

### 1.8.4 main( ) function
 ![image](https://github.com/mazawi/Teaching-CPP/assets/45329653/d812824c-36a2-4264-89a9-dd1366af0eb3)

- Every C++ programme should contain this main function from which the execution starts
- It can include all the code by itself, or it can call other functions that are written outside it.
- All the code should be written between curly braces { },
- It can be of type void, however, integer type is usually used with it to make sure that the execution was correct. (will be discussed later)
- return 0, is used at the end of the function main() to show that no error has occurred.
- All the instructions in C++ should end with a semicolon (;)

### 1.8.5 Variable declaration

- All the variables that are used in C++ programmes should be declared, otherwise, an error shall occur.

#### 1.8.6 Code Format

The code format is used to make the code clearer to the reader and has nothing to do with the functionality of the programme.

1- White space, the user can use any number of whitespaces or indentation without affecting the code.

Code ‎1 3:  Example shows that there is no effect of white spaces on the code

 ```C++
 int x=5;
 ```

is similar to:

```C++
    int x1 = 5;
```

and similar to:

```C++
    int     x    = 5;
```

2- Newlines, users can use any number of newlines and whenever needed to format the code.

3- Each statement should end with a semicolon (;) except the statements that are followed by a block of code or the conditional statement such as (if, while, else, etc.).

4- In the declaration, comms can be used to separate variables of the same type.

Code ‎1 4:  Different ways to declare variables
Code

```C++
    int x1 = 5;
    int x2 = 10;
    int x3 = 7;

// can be replaced by 
    int x1 = 5, x2 = 10, x3 = 7;
```

## 1.9 Input and Output

### 1.9.1 Output using cout

- Object of iostream class
- Used to print something to the screen
- Should be followed by extraction operator <<
Code ‎1 5:  A programme that prints a string
Code

```C++
#include <iostream>
using namespace std;
int main() 
{
   string name = "Mohammad";
   cout << "Welcome "<<name <<endl;
   return 0;
}
```

Execution
Welcome Mohammad

### 1.9.2 Escape Sequence

Escape Sequence Meaning
\' single quote
\" double quote
\? question mark
\\ backslash
\a audible bell
\b backspace
\f form feed - new page
\n line feed - new line
\r carriage return
\t horizontal tab
\v vertical tab

Code ‎1 6:  Using escape sequence in printing messages to the screen
Code

```C++
#include <iostream>
using namespace std;
int main() 
{
   string name = "Mohammad";
   
   cout << "\t\tWelcome \n\n "<<name <<endl;
   return 0;
}
```

Execution
  Welcome

 Mohammad

### 1.9.3 Input using cin

- Object of iostream class
- Used to read a value from the keyboard
- Should be followed by extraction operator >>
Code ‎1 7:  Reading a string from the keyboard using cin
Code

```C++
#include <iostream>
using namespace std;
int main() 
{
   string name;
   cout<< "Enter your name: ";
   cin>> name;
   cout << "Welcome "<<name <<endl;
   return 0;
}
```

Execution
Enter your name: Mohammad
Welcome Mohammad

## 1.10 Exercises

1.1 Write a programme that reads an integer and prints it to the screen,

1.2 Write a programme that contains one cout only to print the following message:
```
Hi my name is XYZ
I study C++
```
1.3 Write a programme that contains one cout only to print the following message:
```
A       B
1       2
```
1.4 Write a programme that contains one cout only to print the following message:
```Hi my name is “XYZ”
I study ‘C++’
```
1.5 Write a programme that contains one cout only to print the following message
```(“//”) is used to comment a line.```

