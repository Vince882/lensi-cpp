#include<iostream>
using namespace std;

class student
{
  private:

  int no;
  int guj;
  int maths;
  int eng;
  int tot,per;
  char name[20];

  public:

  void setdata();
  void showdata();
  void total();
  
};
void student:: setdata()
  {
      cout<<"enter the roll no:";
      cin>>no;
      cout<<"enter the sub1:";
      cin>>guj;
      cout<<"enter the sub2:";
      cin>>maths;
      cout<<"enter the sub3:";
      cin>>eng;
  }
  void student :: total()
  {
     tot=guj+maths+eng;
     per=tot*100/300;
     cout<<"per is:"<<per<<endl;
    
     

  }
  void student :: showdata()
  {
    cout<<no<<endl;
    cout<<guj<<endl;
    cout<<maths<<endl;
    cout<<eng<<endl;
  }
int main()
{
     student c[3];
     
     for(int i=0;i<3;i++)
     {
        c[i].setdata();
        c[i].showdata();
        c[i].total();
     }
  
     return 0;

}
