#include<iostream>
using namespace std;
class abc1
{
    int marks;
public:
    void get()
    {
        cout<<"enter marks\n";
        cin>>marks;
        if(marks>=65)
        {
            if(marks>=85)
            {
                cout<<"eligible for science,commerce,arts";
            }
            else if(marks>=75)
            {
                cout<<"eligible for commeerce and arts";
            }
            else
            {
                cout<<"eligible for arts";
            }
        }
        else
        {
            if(marks>=60)
            {
                cout<<"wait for 2nd round result";
            }
            else
            {
                cout<<"not eligible";
            }
        }
    }
};
int main()
{
    abc1 ob;
    ob.get();
}
