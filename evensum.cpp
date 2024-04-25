#include<iostream>
using namespace std;

int main()
{
   int i,sum=0,n;
   cout<<"enter the value:";
   cin>>n;

   for(i=1;i<=n;i++)
   {
    if(i%2==0)
    {
        sum=sum+i;
    } 
   }
cout<<sum<<endl;
    return 0;
}