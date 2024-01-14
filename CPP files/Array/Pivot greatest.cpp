// finding pivot which is greatest
// given input must be sorted and rotated
// i/p => 9,10,2,3,4,6,8
// o/p => index: 1 & value: 10

#include<iostream>
using namespace std;

int findPivot(int arr[],int n){

    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1 >= s && arr[mid-1]>arr[mid]){
            return mid-1;
        }

        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+ (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={9,10,2,4,6,8};
    int size=6;
    int ans=findPivot(arr,size);

    if(ans== -1){
        cout<<"input mein error hein";
    }
    else{
        cout<<"ans index "<<ans<<endl;
        cout<<"ans value "<<arr[ans]<<endl;
    }
    return 0;
}
