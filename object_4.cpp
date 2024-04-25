#include<iostream>
using namespace std;

class flight
{
    private:

    int flightnumber;
    string destination;
    float distance;
    float fuel;

    public:

    void feedinfo()
    {
        cout<<"enter the flightnumber:";
        cin>>flightnumber;
        cout<<"enter the destination:";
        cin>>destination;
        cout<<" enter the distance:";
        cin>>distance;
        cout<<"enter the fuel:";
        cin>>fuel;

    }
     void calfuel()
     {

     }
      
   void showinfo()
   {
    cout<<"enter the flightnumber:"<<flightnumber<<endl;
    cout<<"enter the destination:"<<destination<<endl;
    cout<<" enter the distance:"<<distance<<endl;
    cout<<"enter the fuel:"<<fuel<<endl;
   }
             
};
int main()
{
    flight c;
    c.feedinfo();
    c.showinfo();

    return 0;
}

