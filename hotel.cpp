#include<iostream>
using namespace std;

class list
{
    public:

    void print()
    { 
        cout<<"show manu=1"<<endl;
        cout<<"select item=2"<<endl;
        cout<<"current status=3"<<endl;
        cout<<"get bill=3"<<endl;
        cout<<"menu exit=0"<<endl;
    }
};    
   int main()
   {
    int choice;
    list c;
    next: c.print();

       cout<<"enter the choice:"; 
       cin>>choice;

       switch(choice)
       {
           case 1:

               cout<<"~~~~~~MENU~~~~~~~"<<endl;


               cout<<"1" <<"manchurian"<<"         " <<"100" <<endl;
               cout<<"2" <<"chilli paneer"<<"      "<<"500" <<endl;
               cout<<"3" <<"jeera rise"<<"         " <<"250" <<endl;
               cout<<"4" <<"palak paneer"<<"       " <<"450"  <<endl;
               cout<<"5" <<"burger"<<"             " <<"300" <<endl;
               goto next;
               break;

               case 2:

                cout<<"~~~~~~CURRENT STATUS~~~~~~~"<<endl;


              

               default:
                  cout<<"the value",choice;
                  break;
           





       }

       return 0;


   } 
