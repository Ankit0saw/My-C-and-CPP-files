// In this code, i have showed all the 3 methods used to swap two values


#include<iostream>
using namespace std;

void swapMethod1(int a, int b){
    // +- method (without using third variable)
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping with Method 1:"<<endl;
    cout<<"1st no    :"<<a<<endl;
    cout<<"2nd no    :"<<b<<endl;
}

void swapMethod2(int a, int b){
    // temp method (using third variable)
    int temp=a;
    a=b;
    b=temp;

    cout<<"After swapping with Method 2:"<<endl;
    cout<<"1st no    :"<<a<<endl;
    cout<<"2nd no    :"<<b<<endl;
}

void swapMethod3(int a, int b){
    // xor method
    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"After swapping with Method 3:"<<endl;
    cout<<"1st no    :"<<a<<endl;
    cout<<"2nd no    :"<<b<<endl;
}

int main(){
    int a,b;
    cout<<"Enter the two nos:"<<endl;
    cin>>a>>b;

    cout<<"Before swapping:"<<endl;
    cout<<"1st no    :"<<a<<endl;
    cout<<"2nd no    :"<<b<<endl;

    swapMethod1(a,b);
    swapMethod2(a,b);
    swapMethod3(a,b);

    return 0;
}
