#include<iostream>
using namespace std;

class calarea
{
    public:
    
    int area;
    calarea()
    {
          int r=2; 

          area=3.14*r*r;
    }
    calarea(int a)
    {
        area=a*a;
    }
    calarea(int w,int l)
    {
        area=w*l;
        
    }
    void print()
    {
        cout<<area<<endl;
    }
};
  int main()  
  {
       calarea obj,obj1(10),obj2(10,2);
       obj.print();
       obj1.print();
       obj2.print();

   return 0;
  } 
