#include<iostream>
using namespace std;

class complex
{
   int a;
   int b;


public:

void setdata(int x ,int y)
  { 
    a=x;
    b=y;
  }
void printdata()
{
    cout<<"first vslue:"<<a<<endl;
    cout<<"second value:"<<b<<endl;
}  
complex operator-(complex c)
{
    complex t;

    t.a=a-c.a;
    t.b=b-c.a;

    cout<<"the  a"<<t.a<<endl;
    cout<<"the  b"<<t.b<<endl;

    return t;
   }
}; 
int main()
{
    complex c1,c2,c3;

    c1.setdata(3,6);
    c2.setdata(2,4);

    
    cout<<"first input:"<<endl;
    c1.printdata();

    cout<<"second input:"<<endl;
    c2.printdata();


    cout<<"final input:"<<endl;

    c3=c1-c2;
    c3.printdata();

    return 0;

}