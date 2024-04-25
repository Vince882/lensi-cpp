#include<iostream>
using namespace std;

int number=0;

class complex
{
    public:

    complex()
    {
        number++;
        cout<<"the number is"<<number<<endl;
    };
    ~complex()
     {
        number--;
        cout<<"the number is"<<number<<endl;
     }
};
int main()
{
    complex data,data1,data2;
}