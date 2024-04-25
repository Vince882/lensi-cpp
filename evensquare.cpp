#include<iostream>
using namespace std;

int main()
{
   int i,sum=0;

   for(i=1;i<=10;i++)
   {
    if(i%2==0)
    {
        sum=i*i;
        cout<<sum<<endl;
    }
    else
    {
        cout<<i<<endl;
    }
   
   }
 return 0;
}