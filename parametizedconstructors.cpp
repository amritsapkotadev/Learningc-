// // // display the area of rectangle using parameterized constrcctors
// // #include <iostream>
// // using namespace std;
// // class rectangle
// // {
// //      int length, breadth;

// // public:
// //      // constructor declaration
// //      rectangle(int l, int b)
// //      {
// //           length = l;
// //           breadth = b;
// //      }
// //      void area()
// //      {
// //           int area = length * breadth;
// //           cout << "the length is :" << length << endl;
// //           cout << "the breadth is :" << breadth << endl;

// //           cout << "the area is :" << area << endl;
// //      }
// // };
// // int main()
// // {
// //      // creating the object
// //      rectangle rect(10, 5);
// //      rect.area();
// // }

// // display the complex number using parameterized constructors
// #include <iostream>
// using namespace std;
// class complex
// {
//      int real, imag;

// public:
//      // constructor declaration
//      complex(int r, int i)
//      {
//           real = r;
//           imag = i;
//      }
//      void display()
//      {

//           cout << "The complex number is: " << real << " + " << imag << "i" << endl;
//      }
// };
// int main()
// {
//      // creating object
//      complex com(4, 5);
//      com.display();

//      return 0;
// }
// calculate and display the simple interest using paramaterized constructors
#include <iostream>
using namespace std;
class interest
{
public:
     double principal, rate, time;
     interest(double p, double t, double r)
     { // constructor is defined
          principal = p;
          time = t;
          rate = r;
     }
     void display()
     {
          double si = (principal * time * rate) / 100;
          cout << "the simple interest is :" << si << endl;
     }
};

int main()
{
     // object is created
     interest obj(100, 1, 10);
     obj.display();
     return 0;
}