#include<iostream>
using namespace std;

class complex
{
  public:
  int area;

  complex()
  {
    int a=10;
    int b=20;
    area=a+b;
  }
  complex(int a)
  {
    area=a+20;
  }
  complex (int a,int b)
  {
    area=a+b;
  }
  void print()
  {
     cout<<area<<endl;
  }
}; 
  int main()
  {
     complex obj,obj1(10,50),obj2(20);
     obj.print();
     obj1.print();
     obj2.print();

     return 0;
  }
