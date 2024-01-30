// here, input = 2,3,4,5
// then o/p = 3,2,5,4 i.e. every alternate elements is reversed

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of array :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the array elemenets :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"-----RESULT-----"<<endl;
    for(int i=0;i<size;i+=2){
        if(i+1<size)
            swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
