// i/p= 1 2 4 2 1 3 6 5 5 6 6 4 then o/p = 3
// here, all the repeated element is removed and only unique is displayed


#include <iostream>
using namespace std;

int main(){
    int arr[20];
    int s;
  
    cout<<"enter size :";
    cin>>s;
  
    cout<<"enter elements :";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }

    cout<<"\ndisplay elements :";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"  ";
    }

    cout<<"\nunique element is :";
  
    for(int i=0;i<s;i++){
        int count=0;
        for(int j=0;j<s;j++){
            
            if(i!=j){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
        }
        if(count==0)
            cout<<arr[i]<<"  ";
    }
}
