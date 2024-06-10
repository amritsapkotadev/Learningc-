#include <iostream>
using namespace std;
class employee
{
private:
     int a, b, c;

public:
     int d, e;
     void setData(int a1, int b1, int c1) // declaration of new variable to access the private members
     
     {
          a=a1;
          b=b1;
          c=c1;
     }
     void getData()
     {
          cout << "the value of a is:" << a << endl;
          cout << "the value of b is:" << b << endl;
          cout << "the value of c is:" << c << endl;
          cout << "the value of d is:" << d << endl;
          cout << "the value of e is:" << e << endl;
     }
};
int main()
{
     employee amrit;

amrit.d=13;
amrit.e=33;
amrit.setData(1,2,2);
amrit.getData();
return 0;
}