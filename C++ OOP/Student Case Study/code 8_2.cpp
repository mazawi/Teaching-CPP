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