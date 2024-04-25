#include <iostream>
#include <string>
using namespace std;

class report 
{
private:
    int adno;
    char name[21];
    float marks[5];
    float average;
    int i,sub1,sub2,sub3,total,avg;
  
  public:
  
  void readinfo()
  {
    cout<<"enter the adno:";
    cin>>adno;
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the sub1:";
    cin>>sub1;
    cout<<"enter the sub2:";
    cin>>sub2;
    cout<<"enter the sub3:";
    cin>>sub3;
     
    
  }
   void getavg()
   {
      total=sub1+sub2+sub3;
      avg=total*100/300;
   }   

  void displayinfo()
  {
    cout<<"adno is:"<<adno<<endl;
    cout<<"name is:"<<name<<endl;
    cout<<"total is:"<<total<<endl;
     cout<<"avg is:"<<avg<<endl;
    
  }
};
int main()
{
    report c;
    c.readinfo();
    c.getavg();
    c.displayinfo();
}
