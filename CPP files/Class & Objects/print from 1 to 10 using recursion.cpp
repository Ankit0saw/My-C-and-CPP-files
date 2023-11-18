// This program will print the nos. from 1 to 10
// using recursion

#include<iostream>
using namespace std;
class abc1
{
public:
    void display()
    {
        disp(1);
    }
    void disp(int i)
  {
    if(i<=10)
    {
        cout<<i<<endl;
        disp(i+1);
    }
  }
};
int main()
{
    abc1 ob;
    ob.display();
}
