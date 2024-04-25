#include<iostream>
using namespace std;

void sum()
{
    cout<<10+20<<endl;
}
void sum(int a)
{
    cout<<a+20<<endl;
}
void sum(int a, int b)
{
   cout<<a+b<<endl;
}

int main()
{
   sum();
   sum(10);
   sum(10,20);

   return 0;

}