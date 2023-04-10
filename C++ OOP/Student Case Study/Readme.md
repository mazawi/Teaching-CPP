# Case Study  
In this part, we will take an example and apply all the principles to it to further clarify the class ideas.
The example is the student.
Attributes
What are the main attributes that the student has?
-	Name
-	ID, 
-	GPA, 
-	Specialisation, 
-	Degree, 
-	Study Mode, 
-	Etc.

```C++
class Student
{
public: 
string Name;
string Specialisation;
int ID;
};
Code ‎8 1:  define the student as a class
Code
#include <iostream>
using namespace std;
class Student
{
public: 
    string Name;
    string Specialisation;
    int ID;
};
int main() 
{
  Student st1;
  st1.Name = "Ali";
  st1.Specialisation = "MIS";
  st1.ID = 1234;
  cout << st1.Name;
  return 0;
}
```
Execution
```C++
 Ali
 ```

In this example:
-	The attributes are public which means that they can be accessed directly from outside the class using (.) operator
Methods
The methods are the functions that the student can do, or can be applied to the student attributes such as:
-	Accessing private or protected attributes
-	Setting and getting attributes are examples of methods, 
-	Printing information, performing some mathematical calculations, etc.
```C++
class Student
{
public: 
    string Name;
    string Specialisation;
    int ID;
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
    }
};
```
Code ‎8 2:  define the student as a class and adding info as  a method
Code
```C++
#include <iostream>
using namespace std;
class Student
{
public: 
    string Name;
    string Specialisation;
    int ID;
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
    }
};
int main() 
{
  Student st1;
  st1.Name = "Ali";
  st1.Specialisation = "MIS";
  st1.ID = 1234;
  st1.info();
  return 0;
}
```


## Constructor 
To initialize the class, a constructor can be used, the constructor should be:
-	Public
-	Same name as the class name
-	Does not return values

```C++
class Student
{
public: 
    string Name;
    string Specialisation;
    int ID;
    Student (string name, string sp, int id)
    {
        Name = name;
        Specialisation = sp;
        ID = id;
    }   
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
        
    }
};
```
Code ‎8 3:  Define the student as a class and initializing the attributes using constructor
Code
```C++
#include <iostream>
using namespace std;
class Student
{
public: 
    string Name;
    string Specialisation;
    int ID;
    Student (string name, string sp, int id)
    {
        Name = name;
        Specialisation = sp;
        ID = id;
    }   
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
        
    }
};

int main() 
{
  Student st1 = Student ("Ali", "MIS", 1234);  
  st1.info();
  
  return 0;
}

```


## Encapsulation


Code ‎8 4:  define the student as a class and accessing the private attributes using public functions
Code
```C++
#include <iostream>
using namespace std;
class Student
{
private: 
    string Name;
    string Specialisation;
    int ID;
public:    
    Student (string name, string sp, int id)
    {
        Name = name;
        Specialisation = sp;
        ID = id;
    }       
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;   
    }
    void SetName(string n) { Name = n; }
    string GetName() { return Name;   }
};
int main() 
{
  Student st1 = Student ("Ali", "MIS", 1234);  
  st1.info();
  cout << st1.GetName();
  return 0;
}
```
Execution
```C++
Student Name is: Ali
Student Specialisation is: MIS
Student ID is: 1234
Ali 
```

## Abstraction
Code ‎8 5:  define the student as a class define an abstract class AbsSt
Code
```C++
#include <iostream>
using namespace std;
// Abstract class
class AbsSt
{
    virtual void HonourList() = 0;
};
class Student:AbsSt
{
private: 
    string Name;
    string Specialisation;
    int ID;
    float GPA;
public:    
    Student (string name, string sp, int id, float gpa)
    {
        Name = name;
        Specialisation = sp;
        ID = id;
        GPA = gpa;
    }   
    
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
        cout<<"Student GPA is: "<< GPA<<endl;  
    }
    
    void SetName(string n) { Name = n; }
    string GetName() { return Name;   }
    void HonourList()
    {
        if (GPA >80) cout<<Name <<"You will be in the honour list"<<endl;
    }
};

int main() 
{
  Student st1 = Student ("Ali", "MIS", 1234, 87.321);  
  st1.info();
  st1.HonourList();
  return 0;
}

```


## Inheritance 

Code ‎8 6:  define the student as a class and adding info as  a method
Code
```C++
#include <iostream>
using namespace std;
// Abstract class
class AbsSt
{
    virtual void HonourList() = 0;   
};

class Student:AbsSt
{
private: 
    string Name;
    string Specialisation;
    int ID;
    float GPA;
public:    
    Student (string name, string sp, int id, float gpa)
    {
        Name = name;
        Specialisation = sp;
        ID = id;
        GPA = gpa;
    }   
    
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
        cout<<"Student GPA is: "<< GPA<<endl;
        
        
    }
    void SetName(string n)  { Name = n;    }
    string GetName()  { return Name;   }
    void HonourList()
    {
        if (GPA >80) cout<<Name <<" You will be in the honour list"<<endl;
    }
};
class GradStudent: public Student
{
private: 
    int Remaining_Hours;
    
public:
    GradStudent(string name, string sp, int id, float gpa, int remaining_hours): Student(name,  sp,  id,  gpa)
    {
        Remaining_Hours = remaining_hours;
    }
};

int main() 
{
  Student st1 = Student ("Ali", "MIS", 1234, 87.321);  
  st1.info();
  st1.HonourList();
  GradStudent gs = GradStudent ("Ahmed", "CS", 456, 66, 18);
  gs.info();
  return 0;
}

```


## Polymorphism 

Code ‎8 7:  define the student as a class and adding info as  a method
Code
```C++
#include <iostream>
using namespace std;
class AbsSt
{
    virtual void HonourList() = 0; 
};

class Student:AbsSt
{
protected: 
    string Name;
    string Specialisation;
    int ID;
    float GPA;
public:    
    Student (string name, string sp, int id, float gpa)
    {
        Name = name;
        Specialisation = sp;
        ID = id;
        GPA = gpa;
    }   
    
    void info ()
    {
        cout<<"Student Name is: "<< Name<<endl;
        cout<<"Student Specialisation is: "<< Specialisation<<endl;
        cout<<"Student ID is: "<< ID<<endl;
        cout<<"Student GPA is: "<< GPA<<endl;   
    }
    
    void SetName(string n)  { Name = n;    }
    string GetName()     { return Name;    }
   
 void HonourList()
    { 
if (GPA >80) cout<<Name <<" You will be in the honour list"<<endl; 
    }
    
    void NextSem()
    {
        cout << Name<<" Needs to Register courses next semester"<<endl;
    }
};

class GradStudent: public Student
{
private: 
    int Remaining_Hours;
    
public:
    GradStudent(string name, string sp, int id, float gpa, int remaining_hours): Student(name,  sp,  id,  gpa)
    {
        Remaining_Hours = remaining_hours;
    }
    
    void NextSem()
    {
        cout << Name<<" Needs to Take training"<<endl;
    }
};

int main() 
{
  Student st1 = Student ("Ali", "MIS", 1234, 87.321);  
  st1.info();
  st1.NextSem();
  GradStudent gs = GradStudent ("Ahmed", "CS", 456, 66, 18);
  gs.NextSem();
  
  return 0;
}

```


