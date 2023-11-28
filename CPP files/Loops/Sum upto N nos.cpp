// Here, if you enter N =5 
// then, output is 1+2+3+4+5 = 15

#include <iostream>
using namespace std;

int main() 
{
    int num;
    double sum=0;
    
    cout<<"Enter the no upto which you need the sum :"<<endl;
    cin>>num;
    
    for(int i=1;i<=num;i++){
      sum+=i;
    }
    
    cout<<"The output sum :"<<sum;
    return 0;
}
