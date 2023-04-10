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