#include<iostream>
using namespace std;

class Test
{
   private:
   
   int testcode;
   string description;
   int nocandidate;
   int centerreqd;

   int calcntr()
   {
      return(nocandidate/100+1);
   }
   
   public:
   
   void Schedule()
   {
    cout<<"enter testcode:";
    cin>>testcode;
    cout<<"enter description:";
    cin>>description;
    cout<<"enter nocandidate:";
    cin>>nocandidate;
    
   }
   

  void  Disptest()
  {
        cout<<"display testcode"<<testcode<<endl; 
        cout<<"display description"<< description<<endl; 
        cout<<"display nocandidate"<<nocandidate<<endl; 
       

  }
};
 int main()
 {
    Test c;
    c.Schedule();
    c.Disptest();
    
    return 0;
    
 }