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
 

8.7.1	Why Inheritance 
Consider a group of Employees. We need to create classes for Programmers, Administered, HR,  and others. The methods Calculate_Salary(), Leaves(), etc are the same for all of the classes. In addition, some attributes such as ID, Name, etc. are common among the classes. If we create these classes avoiding inheritance then we have to write all of these functions in each of the classes.

<img width="396" alt="image" src="https://user-images.githubusercontent.com/45329653/230849979-15549a71-9214-480a-af10-9235b5c6473c.png">

If we could take the common attributes and methods and put them in one class (superclass) and other classes can inherit these from it, then this will make the programme easier to understand, reduce redundancy, and reduce any chance of error.![image](https://user-images.githubusercontent.com/45329653/230850039-8b73818c-f247-4f0d-97cf-d17a8eec580f.png)

<img width="398" alt="image" src="https://user-images.githubusercontent.com/45329653/230850102-bd265b97-7d57-4594-b114-d7ac09528d8b.png">


    Circle c = Circle(5, 6, 4);
