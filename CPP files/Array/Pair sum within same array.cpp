// in this program, you need to enter the size of array then insert it's elements and then enter the pair sum value
// now the code will find all the possible elements from the array whose sum is equal to the entered pair sum value and display as output



#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size,sum=0;
    cout<<"enter size of array:";
    cin>>size;

    cout<<"enter the array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the pair sum you'll need to find:";
    cin>>sum;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"pair :"<<arr[i]<<" & "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}
