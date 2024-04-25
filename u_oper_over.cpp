#include<iostream>
using namespace std;

class sample
{
   int x;
   int y;
    
  public:

  void getdata(int a,int b);
  void printdata();
  void operator++();
  
};

void sample :: getdata(int a,int b)
{
   x=a;
   y=b;
}

void sample :: printdata()
{
    cout<<x<<endl;
    cout<<y<<endl;

}

void sample :: operator++()
{
    ++x;
    ++y;

}
int main()
{
   sample c;
   c.getdata(4,9);
   c.printdata();
   ++c;
   c.printdata();

   return 0;  
}



