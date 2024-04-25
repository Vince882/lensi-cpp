#include<iostream>
using namespace std;

void sum(int a)
{
    cout<<4*a*a<<endl;    
}
void sum(int b,int h)
{
    cout<<b*h<<endl;
}
void sum( int a,int h,int l,int b)
{
    cout<<a*h*l+b<<endl;
}
void sum(int a,int r,int h)
{
  cout<<a*3.14*r*h<<endl;
     
}
void sum()
{

    cout<<4*10*10<<endl;
}

int main()
{
   sum(10);
   sum(2,4);
   sum(2,3,4,1);
   sum(10,2,3);
  

   return 0;

}