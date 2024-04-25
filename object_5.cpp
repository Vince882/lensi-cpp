#include<iostream>
using namespace std;

class book
{
    private:

    int bookno;
    char booktitle[21];
    float price;
    
    public:

    void total_cost(int copy)
    {
    
        cout<<"total cost:"<<copy*price<<endl;
    }

    void input()
    {
        cout<<"enter bookno:";
        cin>>bookno;
        cout<<"enter booktitle:";
        cin>>booktitle;
        cout<<"enter price:";
        cin>>price;

    }
     void purchase()
     {
        cout<<"bookno is"<<bookno<<endl;
        cout<<"booktitle is"<<booktitle<<endl;
        cout<<"price is"<<price<<endl;
        int numCopies;
        cout << "copies to be purchased:";
        cin >> numCopies;
        total_cost(numCopies);
     }

};
int main()
{
    book c;
    c.input();
    c.purchase();
}