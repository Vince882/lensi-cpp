#include<iostream>
using namespace std;

void sum()
{

    cout<<3.14*2*2<<endl;
}
 void sum(int a)
 {
    cout<<a*a<<endl;
 }
 void sum(int w, int l)
 {
    cout<<w*l<<endl;
 }
 void sum(int l,int b,int h)
 {
   cout<<l*b*h<<endl;
 }
 int main()
 {
    sum();
    sum(5);
    sum(6,4);
    sum(3,2,4);

    return 0;
 } 