// Enter any no and get the Table of that no 
// eg: for n=5, o/p: 5*1=5 and so on

#include<iostream>
using namespace std;

class abc
{
    int i,n;
public:
    void print()
    {
        cout<<"enter any no\n";
        cin>>n;
        for (i=1;i<=10;i++)
        {
            cout<<n<<"x"<<i<<" = "<<n*i<<endl;
        }
    }
};
int main()
{
    abc ob;
    ob.print();
    return 0;
}
