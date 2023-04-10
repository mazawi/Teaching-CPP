# 8	Classes
## 8.1	What is a class
-	The class is a programming structure that can be used to define an object
-	It consists of the following part:
* Class (object) name
* Attributes: features of the object
* Methods: member functions of the class and operations or activities that can be done.
Example 1: A student is an object, 
-	The class name might be Student, 
-	The attributes might be ID, Name, Specialisation, etc.
-	The methods might be calculate_average, get_mark, etc.
Example 2: Car
-	The class name might be Car, Car_Class, CarClass, etc.
-	The attributes might be colour, price, make, model, etc.
-	The methods might be getMxSpeed, GetPrice, etc. 
## 8.2	Access specifier
-	Mainly there are three types of specifiers, public, private, and protected.
-	By default, the specifiers are private
8.2.1	 Public 
Can be accessed directly from outside the class
Code  ‎8.1: Example of point class with public attributes
Code
```C++
#include <iostream>
using namespace std;

class point{
 public:
    int x;
    int y;
};

int main(){
  point p1;
  p1.x = 5;
  p1.y = 7;
  cout<<"The coordinates of the points ("<<p1.x<<", "<<p1.y<<")\n"  ;
}
```
Execution
```C++
The coordinates of the points (5, 7)
  ```

### 8.2.2	Private 
Attributes and methods can be accessed from the methods inside the class only.
Code  ‎8.2: Example of point class with private attributes
Code
```C++
#include <iostream>
using namespace std;

class point
{
 private:
    int x;
    int y;
};

int main()
{
  point p1;
  p1.x = 5;
  p1.y = 7;
  cout<<"The coordinates of the points ("<<p1.x<<", "<<p1.y<<")\n"  ;
}
```
Execution
```C++
In function 'int main()':
7:9: error: 'int point::x' is private
14:6: error: within this context
8:9: error: 'int point::y' is private
15:6: error: within this context
7:9: error: 'int point::x' is private
16:47: error: within this context
8:9: error: 'int point::y' is private
16:59: error: within this context
```
Code  ‎8.3: Accessing the private attribute via a public method
Code
```C++
#include <iostream>
using namespace std;
class point {
    private:
        int x;
        int y;

    public:
        void setCor(int x_cor, int y_cor)
        {
            x = x_cor;
            y = y_cor;
        }
        void printCor ()
        {
        cout<<"The coordinates of the points ("<<x<<", "<<y<<")\n" ;
        }
};

int main() {
  point p1;
  p1.setCor(98, 67);
  p1.printCor();  
}
```
Execution
```C++
The coordinates of the points (98, 67)
```
### 8.2.3	Protected
Can be accessed by the class itself and the derived classes when inherited features from the superclass. Will be explained soon.
## 8.3	Constructors 
-	A public member method 
-	Has the same name as the class name
-	Usually used to initialise the instance of the class
Code  ‎8.4: using constructor in Point Class
Code
```C++
#include <iostream>
using namespace std;
class Point {
    private:
    int x;
    int y;
    public:
    Point(int x1, int y1){
        x = x1;
        y = y1;
    }
};
int main()
{
    Point p1 = Point(5,7);
    Point p2 = Point (10, 14);
}
```

## 8.4	Nested Classes
A nested class is a class that is declared in another class.
Code  ‎8.5: Nested Class.
Code
```C++
#include<iostream>
using namespace std;
class upper {
   public:
   class lower
   {
      private:
      int N;
      public:
      void Setdata(int n) {
         N = n;
      }
      void Printdata() {
         cout<<"The number is "<<N;
      }
   };
};
int main() {
   
   upper :: lower x;
   x.Setdata(9);
   x.Printdata();
   return 0;
}
```
Execution
```C++
The number is 9 
  ```

## 8.5	Accessor and Mutator Functions
provide a direct way to change or just access private variables. 
Code  ‎8.6: Accessor and Mutator.
Code
```C++
class NUM {
  public:
    int getNum()                          // accessor or get function
   { 
    return N;
   }

    void setNum(int numer)        // mutator or set function
   {
    N = numer;
   }
  private:
    int N;
};
```

## 8.6	Defining a member function outside the class
When you define a member function outside the class:

1-	Declare it inside the class

2-	Use (class name:: function name) to define it

Code  ‎8.7: Defining member functions outside the class.
Code
```C++
class NUM
{
  public:
    int getNum();                        // accessor or get function
    void setNum(const int numer);        // mutator or set function
    
  private:
    int N;
};
int NUM::getNum()
{
    return N;
}

void NUM::setNum(const int numer)
{
    N = numer;
}
```


## 8.7	Inheritance 
-	When deriving a subclass from the original class, 
-	The derived class, (subclass, child class) will inherit all the attributes and methods from the original class (superclass, parent class)

In the following example, the class Circle inherits the coordinates x and y and the methods in addition it has its own methods.
class Circle:Point
* This means the class Circle inherits all the features and methods of the class Point.
* The class Circle could have more attributes and methods other than those available in Point
* Circle is known as: Child Class or Sub Class
* Point is known as: Parent Class or Super Class
Code  ‎8.8: A Circle class inherits attributes and methods from the Point class
Code
```C++
#include <iostream>
using namespace std;
class Point {
    private:
    int x;
    int y;
    public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    int getX() { return x; }
    int getY(){ return y; }
    void setX(int val) { x = val; }
    void setY(int val) { y = val; }
  
    void print() { cout<<"("<<x <<", "<<y<<")"<<endl; }
};

// Inheritance
class Circle:Point {
    public:
    double radious;
    Circle(int x, int y, double r): Point(x, y)
    {
        radious = r;
    }

    double findArea()
    {
        return 3.14*radious*radious;
    }
};

int main(){
    Point p1 = Point(5,7);
    Point p2 = Point (10, 14);
    p2.setX(100)
    Circle c = Circle(5, 6, 4);
    double a = c.findArea();
    cout<<"The area is: "<<a<< endl;
}
```
Execution
```C++
The area is: 50.24
 ```
 

### 8.7.1	Why Inheritance 
Consider a group of Employees. We need to create classes for Programmers, Administered, HR,  and others. The methods Calculate_Salary(), Leaves(), etc are the same for all of the classes. In addition, some attributes such as ID, Name, etc. are common among the classes. If we create these classes avoiding inheritance then we have to write all of these functions in each of the classes.

<img width="741" alt="Screenshot 2023-04-10 at 11 27 17" src="https://user-images.githubusercontent.com/45329653/230850363-1c8d1dd1-784c-4295-8ae9-873cb41258f7.png">

If we could take the common attributes and methods and put them in one class (superclass) and other classes can inherit these from it, then this will make the programme easier to understand, reduce redundancy, and reduce any chance of error.

<img width="726" alt="Screenshot 2023-04-10 at 11 28 06" src="https://user-images.githubusercontent.com/45329653/230850511-ce9a4d18-3aba-4416-b2ce-e69ec968f50a.png">


Code  ‎8.9: A Circle class inherits attributes and methods from the Point class
Without Inheritance
```C++
#include <iostream>
using namespace std;
 
class A { int x, y, z;};
class B { int x, y, w; };
class C { int x, y, v; };

int main()
{
    A a1;
    B b1;
    C c1;
}
```

With Inheritance
```C++
#include <iostream>
using namespace std;
 
class S { int x, y; };

class A: S
{ int  z; };

class B: S
{ int w; };

class C: S
{ int v; };

int main(){
    A a1;
    B b1;
    C c1;
}
```
 Code  ‎8.10:
Public access to class and members
```C++
#include <iostream>
using namespace std;
 
class S 
{
    public:
    int x, y;
    public:
    void print()
    {cout<<x<<", "<<y<<endl;}
};
class A:public S
{
    public:
    int  z;
};

int main()
{
    A a1;
    a1.z = 5;
    a1.x = 7;
    a1.y = 9;
    a1.print();
}
```
### 8.7.2	 Inheritance modes 
It is the mode in which we want to inherit this sub class such as: public, private, or protected. 
The derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.
Public mode: The public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
Protected mode: both public members and protected members of the base class will become protected in the derived class.
Private mode: both public members and protected members of the base class will become Private in the derived class.
In all cases, private members in the base class cannot be directly accessed in the derived class
Code  ‎8.11: Inheritance and access modes.
Code
```C++
class A 
{
public:
    int x;
protected:
    int y;
private:
    int z;
};
 
class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};

```
### 8.7.3	Inheritance Types
**1-	Single inheritance**
![image](https://user-images.githubusercontent.com/45329653/230867878-2892d1a0-2000-4647-9e67-f70d628cff08.png)
```C++
class subclass_name : access_mode base_class
{
  // body of subclass
};
```
![image](https://user-images.githubusercontent.com/45329653/230867929-3dd4d4af-9d02-49b4-81c3-469b2be71c38.png)

Code  ‎8.12: Single Inheritance

![image](https://user-images.githubusercontent.com/45329653/230868200-6cb05989-3152-4d79-aacd-70fcab2bac61.png)

Code  ‎8.13: Single Inheritance Car Example.
Code
```C++
#include<iostream>
using namespace std;
 
class Car 
{
  public:
    Car()
    { cout << "This is a Car Class"<<endl; }
};
 
class Truck : public Car 
{
 public:
 Truck() { cout<<"This is a Truck class derived from Car class"<<endl; }
};

int main()
{  
    cout<<"Declaring a Car class\n";
    Car c1;
    cout<<"Declaring a Truck class\n";
    Truck t1;
}
```
Execution
```C++
Declaring a Car class
This is a Car Class
Declaring a Truck class
This is a Car Class
This is a Truck class derived from Car class
Press any key to continue . . .
```

**2-	Multiple Inheritance**

<img width="381" alt="Screenshot 2023-04-10 at 12 55 20" src="https://user-images.githubusercontent.com/45329653/230868867-f59fa7c3-9a47-40fc-bf8b-0d6927fc0280.png">

```C++
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  // body of subclass
};
```


Code  ‎8.14: Multiple Inheritance. 
Code
```C++
//This code is part of C++ course by Dr Mohammad Al-Azawi
#include <iostream>
using namespace std;
class A1 {
    public:
    A1() //constructor
    { cout << "This is Class A1\n";  }
};
class A2 {
    public:
    A2() //constructor
    { cout << "This is Class A2\n";  }
};
class B: A1, A2 {
    public:
    B()  // Constructor
    { cout << "This is Class B\n";   }
};
int main() {
    cout<<"Declaration of an instance of Class B"<<endl;
    B b;
}
```
Execution
```C++
Declaration of an instance of Class B
This is Class A1
This is Class A2
This is Class B
```
Code  ‎8.15: Multiple Inheritance Car Example
Code
```C++
#include<iostream>
using namespace std;

class Car {
  public:
    Car(){ cout << "This is a Car Class"<<endl; }
};
class Vehicle {
  public:
    Vehicle() { cout << "This is a Vehicle Class"<<endl; }
}; 
class Truck : public Car, public Vehicle {
  public:
   Truck(){ cout<<"This is a Truck class derived from Car class"<<endl; }
};

int main(){  
    cout<<"Declaring a Car class\n";
    Car c1;
    cout<<"Declaring a Vehicle class\n";
    Vehicle v1;
    cout<<"Declaring a Truck class\n";
    Truck t1;
}
```
Execution
```C++
Declaring a Car class
This is a Car Class
Declaring a Vehicle class
This is a Vehicle Class
Declaring a Truck class
This is a Car Class
This is a Vehicle Class
This is a Truck class derived from Car class
Press any key to continue . . .
```

**3-	Multilevel Inheritance**
 
![image](https://user-images.githubusercontent.com/45329653/230869564-32087487-8015-4e8a-8022-174767992ed0.png)

Code  ‎8.16: Multi-level Inheritance.
Code
```C++
//This code is part of C++ course by Dr Mohammad Al-Azawi
#include <iostream>
using namespace std;
class A1 {
    public:
    A1() //constructor
    { cout << "This is Class A1\n";  }
};
class A2:A1 {
    public:
    A2() //constructor
    { cout << "This is Class A2\n";  }
};
class B: A2 {
    public:
    B()  // Constructor
    { cout << "This is Class B\n";   }
};
int main() {
    cout<<"Declaration of an instance of Class B"<<endl;
    B b;
}
```
Execution
```C++
Declaration of an instance of Class B
This is Class A1
This is Class A2
This is Class B
```

**4-	Hierarchical Inheritance**
<img width="396" alt="image" src="https://user-images.githubusercontent.com/45329653/230869912-63422e34-4ad5-4776-8848-acd5e56dc96f.png">

**5-	Hybrid Inheritance**
![image](https://user-images.githubusercontent.com/45329653/230870033-f62b3783-ca18-4ca7-b6a2-9947ba7ee92b.png)

Code  ‎8.17: A Circle class inherits attributes and methods from the Point class
Code
```C++
// C++ programme to demonstrate inherence 
// This code is part of C++ courses by Dr Mohammad Al-Azawi
#include <iostream>
using namespace std;
 
// Base class
class Personnel
{
  public:
    int ID;
    string Name;
    double calculate_salary(double basic_salary,double allowance )
    {
        return basic_salary+ allowance;
    }          
};
  
class Programmer: public Personnel
{
  public:
  string field_of_programming;
};

class HR: public Personnel
{
  public:
  string responsibilities;
};

class Amin: public Personnel
{
  public:
  string department_to_run;
};        

int main()
{
    Programmer p1;
    p1.ID = 1;
    p1.Name ="Ahmed";
    p1.field_of_programming ="Python";
    
    cout<<p1.field_of_programming<<endl;
    cout<<p1.calculate_salary(500, 220)<<endl;
         
    return 0;
}
```

Example: Transportation

<img width="697" alt="Screenshot 2023-04-10 at 13 15 10" src="https://user-images.githubusercontent.com/45329653/230872473-bae64959-3ac8-4ca9-811b-9856c0ae37c8.png">


## 8.8	Abstract Class 
Abstraction is displaying only essential information and hiding the details. In other words, classes and functions from outside the class can access only the essential information and all other details and information are hidden. 
For example, consider the car where the driver can start the car and drive it but he/she does not know what is happening in the engine or other parts of the car because they are hidden from him/her.
Code  ‎8.18: 
Code
```C++
#include <iostream>
using namespace std;
class Shape 
{
   public:
      virtual double getArea() = 0;
      void SetW(double W){ w = W;}
      void SetH(double H){ h = H;}
   protected:
      double w;
      double h;
};
class Rectangle: public Shape 
{
   public:
      double getArea() { return (w * h); }
};
class Triangle: public Shape 
{
   public:
      double getArea() { return (w * h)/2; }
};
class Square: public Shape 
{
   public:
      double getArea() { return (w * h);   }
};
 
int main(void) 
{
   Rectangle Rect;
   Triangle  Tri;
   Square Sq;
 
   Rect.SetW(5);
   Rect.SetH(7);
   cout << " Rectangle area: " << Rect.getArea() << endl;

   Tri.SetW(5);
   Tri.SetH(7);
   cout << " Triangle area: " << Tri.getArea() << endl; 
   
   Sq.SetW(5);
   Sq.SetH(5);
   cout << " Square area: " << Sq.getArea() << endl; 

   return 0;
}
```
Execution
```C++
 Rectangle area: 35
 Triangle area: 17.5
 Square area: 25
```
## 8.9	Polymorphism 
Using a function with the same name but with different functionality. 
For example, the function double Area (double h, double w) can be used with different functionality depending on the shape class which uses it. In other words, if the shape is rectangle is should return ( h*w) and if it is triangle it should return (h*w/2). 
 
## 8.10	Compile time 
### 8.10.1	Function overloading
Functions with the same name but with different number and/or type of parameters.
Code  ‎8.19: 
Code
```C++
#include <iostream>
using namespace std;
class A
{
    public:
    void print(int x)
    {
        cout << "value of x is " << x << endl;
    }
      
    void print(double x)
    {
        cout << "value of x is " << x << endl;
    }
      
    void print(int x, int y)
    {
        cout << "values of x and y are " << x << ", " << y << endl;
    }
};
  
int main() {
      
    A a;
    a.print(5);  
    a.print(22.15);
    a.print(25,35);
} 
```

Execution
```C++
value of x is 5
value of x is 22.15
values of x and y are 25, 35
```
### 8.10.2	Operator overloading
Redefining the operators to be applied to  specific variables of types defined in a class. For example, consider the class Coordinate which has the attributes x and y, we can redefine the operation + to be applied to variables of type Coordinates. 
C++ allows operator overloading for most operations except:

1-	. (dot) 

2-	:: 

3-	?: 

4-	sizeof 


Code  ‎8.20: 
Code
```C++
#include <iostream>
using namespace std;
 
class Coordinate {
private:
    int x, y;
public:
    Coordinate(int x1 = 0, int y1 = 0) {x = x1;   y = y1;}
     
    Coordinate operator + (Coordinate const &obj) {
         Coordinate res;
         res.x = x + obj.x;
         res.y = y + obj.y;
         return res;
    }

    Coordinate operator - (Coordinate const &obj) {
         Coordinate res;
         res.x = x - obj.x;
         res.y = y - obj.y;
         return res;
    }
    
    void print() { cout <<"("<< x << ", " << y << ")\n"; }
};
 
int main()
{
    Coordinate c1(7, 5), c2(12, 6), c3;
    c3 = c1 + c2;
    c3.print();
    c3 = c1 - c2;
    c3.print();
}
```
Execution
```C++
(19, 11)
(-5, -1)
```
### 8.10.3	Pure Virtual Functions

Code  ‎8.21: 
Code
```C++
#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      double W, H;
   public:
      Shape( double a = 0, double b = 0){
         W = a;
         H = b;
      }
     virtual double area() =0;
};
class Rectangle: public Shape {
   public:
      Rectangle( double a = 0, double b = 0):Shape(a, b) { }
      
      double area () { return (W * H);  }
};

class Triangle: public Shape {
   public:
      Triangle( double a = 0, double b = 0):Shape(a, b) { }
      
      double area () { return (W * H / 2);  }
};

int main() {
   Rectangle r(10,7);
   Triangle  t(10,7);
   cout<< "Area of Triangle is: "<< t.area()<<endl;
   cout<< "Area of Rectangle is: "<< r.area()<<endl;
}
```
Execution
```C++
Area of Triangle is: 35
Area of Rectangle is: 70
```

## 8.11	Friend Functions
A friend function is a function (or a class) that is defined outside a class but has the ability to access the class members including protected and private data.
Code  ‎8.22: 
Code
```C++
#include <iostream> 
using namespace std;
 class A{
     private:
     int x;

     friend int getx(A);
 };
int getx(A a)
{
    return a.x;
}

int main() {
    A b;
  cout<<getx(b)<<endl;
}
```


## 8.12	Class access operators:
1-	Class Member Access Operator (Dot ( . )): is used to access public members of the class

2-	Arrow (->): If the object is a pointer to an object to access the class members, we can use the -> operator (->) instead of Asterisk (*) and Dot (.) Operators.

3-	Scope resolution ( :: ) is used when we define a member function outside the class, the class should contain the prototype of the function inside.

4-	Colon ( : ): is used in inheritance



