// default constructors has no parameters . constructors must have same name as class

// #include <iostream>
// using namespace std;
// class book
// {
// private:
//      int pages;

// public:
//      book() // constructor declaration -- constructor has same name as class name
//      {
//           pages = 444;
//           cout << "the page number of the book is:" << pages << endl;
//      };
// };
// int main()
// {
//       book obj ;// constructor is called when the object is about to be created.
//      return 0;
// }
#include <iostream>
using namespace std;
class message
{
private:
      
     int age = 22;
     int rollno = 22;

public:
     message()
     {
          cout << "the object is created" << endl;
          cout << "the details are:" << endl;
           cout << "the age is :" << age << endl;
          cout << "the rollno is :" << rollno << endl;
     };
};

int main()
{
     message obj;

     return 0;
}