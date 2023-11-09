#include<iostream>
using namespace std;
class abc1
{
    int i,n;
public:
    void disp()
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
    abc1 ob;
    ob.disp();
}
