// you will enter the length and breadth of an quadrilateral
// output will tell either is square or not

#include <iostream>
using namespace std;

int main()
{
    int length,breadth;
    cout<<"Enter the length :"<<endl;
    cin>>length;
    cout<<"Enter the breadth :"<<endl;
    cin>>breadth;
    
    if(length == breadth){
        cout<<"It is a square";
    }
    else {
        cout<<"It is not square";
    }
    return 0;
} 
