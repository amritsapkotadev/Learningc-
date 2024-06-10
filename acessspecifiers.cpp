// c++ program to understand how the access specifier work.
// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//      int a, b, c;

// public:
//      int d, e;
//      void setData(int a1, int b1, int c1) // declaration of new variable to access the private members

//      {
//           a=a1;
//           b=b1;
//           c=c1;
//      }
//      void getData()
//      {
//           cout << "the value of a is:" << a << endl;
//           cout << "the value of b is:" << b << endl;
//           cout << "the value of c is:" << c << endl;
//           cout << "the value of d is:" << d << endl;
//           cout << "the value of e is:" << e << endl;
//      }
// };
// int main()
// {
//      employee amrit;

// amrit.d=13;
// amrit.e=33;
// amrit.setData(1,2,2);
// amrit.getData();
// return 0;
// }

#include <iostream>
using namespace std;

class student
{
public:
     string name;
     int age, rollno;

private: // value cannot be accessed directly so we should copy the data to new variables
     string girlfriend;
     double income;

public: // public setter method 
     void setData(string newgf, double newincome)
     {
          girlfriend = newgf;
          income = newincome;
     }
     void getData()
     {

          cout << "displaying the info" << endl;
          cout << "the name is:" << name << endl;
          cout << "the age is:" << age << endl;
          cout << "the rollno is:" << rollno << endl;
          cout << "the girlfriend is:" << girlfriend << endl;
          cout << "the income is:" << income << endl;
     }
};
int main()
{
     student obj;
     obj.name = "Amrit sapkota";
     obj.age = 21;
     obj.rollno = 003;
     obj.setData("nogirlfirendyet can you be?", 200000);
     obj.getData();
     return 0;
}