#include<iostream>
using namespace std;

class sample
{
    int x;
    int y;

    public:

    void setdata(int a)
    {
        x=a;
    }
    void getdata()
    {
        cout<<x;
    }
};
int main()
{
    sample c[3];
    int a[3];

    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        c[i].setdata(a[i]);
        c[i].getdata();

        return 0;

    }
}