#include<iostream> 
#include<string> 
using namespace std; 
 
class Student
{ 
    private: 
    int admno; 
    float eng,mat; 
    float total;   
 
    public: 
    string name; 
    void ctotal() 
    { 
       total=eng+mat; 
    } 
    void takedeta(int admno1,float eng1,float mat1); 
 
    
     
 
    void showdata() 
    { 
        cout<<"admno is :-" <<admno<<endl; 
        cout<<"sname is :-" <<name<<endl; 
        cout<<"english:-"<<eng<<endl; 
        cout<<"maths :-"<<mat<<endl; 
        cout<<"total:-"<<total<<endl; 
         
 
    } 
}; 
void Student :: takedeta(int admno1,float eng1,float mat1) 
{ 
    admno=admno1; 
    eng=eng1; 
    mat=mat1; 
  
 
} 
int main() 
{ 
     Student c; 
     c.takedeta(1,20,10); 
     c.name=" lensi anghan"; 
      c.ctotal(); 
     c.showdata(); 
     
    return 0; 
}