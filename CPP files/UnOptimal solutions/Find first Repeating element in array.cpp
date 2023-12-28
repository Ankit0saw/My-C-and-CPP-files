// we have to return the position of first repeating element of array
// i/p =1 5 3 4 3 5 6 then o/p = 2 (since, the repeating elements are 5 and 3 but the first occurance of the element which got repeated is 5.
// hence we have to return its position i.e. 2 ; if all non-repeating elements are there then return -1)

#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    
    cout<<"Enter the array elements  :"<<endl;
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }
    
    cout<<"Input array : ";
    for(int i=0;i<size ;i++){
        cout<<arr[i]<<"  ";
    }
    
    int count=0;
    cout<<"\nResult"<<endl;
  
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                count++;
                break;
            }
        }
        if(count==1){
                break;
            }
    }
    if(count==0){
            cout<<"-1";
        }
    return 0;
}
