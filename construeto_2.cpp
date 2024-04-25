#include<iostream>
using namespace std;

float area;

class circle
{
    int r=10;
    public:

    circle()
    {
       area=3.14*r*r;
       cout<<"area of circle:"<<area<<endl;
    }
    ~circle()
    {
      cout<<"area of circle:"<<area<<endl;
    }
};
int main()
{
    circle area;
}
