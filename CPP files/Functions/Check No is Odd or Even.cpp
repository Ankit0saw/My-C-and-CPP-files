// in this program you need to input a no 
// and the output tells whether it is odd or even

#include<iostream>
using namespace std;

// bool isEven_Method1(int num){     
//     //boolean method
    
//     if(num%2==0)
//         return 1;
//     else
//         return 0;
// }

bool isEven_Method2(int num){   
    // bitwise method
    
    if ( (num & 1)==0)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    cout<<"enter the value of n :"<< endl;
    cin>>n;
        
    // bool res = isEven_Method1(n);
    // if(res)
    //     cout<<n<<" is even no"<<endl;
    // else
    //     cout<<n<<" is odd no"<<endl;
        
    bool ans = isEven_Method2(n);
    if(ans)
        cout<<n<<" is even no"<<endl;
    else
        cout<<n<<" is odd no"<<endl;   
}
