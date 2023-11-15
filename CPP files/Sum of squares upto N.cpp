//sum of squares upto n
// i.e. if n=3 then 1^2 + 2^2 + 3^2 = 14

#include<iostream>
using namespace std;
class abc1
{
public:
    void getdata()
    {
    int sum=0;
    int n;
    cout<<"enter term :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i*i<<"+";
        sum=sum+i*i;
    }
    cout<<"\b="<<sum;
   }
};
int main()
{
    abc1 ob;
    ob.getdata();
}

