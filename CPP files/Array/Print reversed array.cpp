// i/p = 1 2 3 4 5 then o/p = 5 4 3 2 1
// in this code, actual array is still same but it displays the array in opposite order

#include<iostream>
using namespace std;

int main(){
    int size;
    int arr[100];
  
    cout<<"enter the size of array :"<<endl;
    cin>>size;

    cout<<"enter array elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Reversed array :"<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
  return 0;
}
