// i/p = 1,4,5,2,6,5   then o/p = 5,6,2,5,4,1
// this code will take array elements by user and after execution it will display the reverse array in console screen

#include <iostream>
using namespace std;

void swaps(int arr[], int size){
    int temp;
    int start=0; 
    int end = size -1 ;
    
    while(start<=end){
         temp=arr[start];
         arr[start]=arr[end];
         arr[end]=temp;
         start++;
         end--;
    }
    
    cout<<"\nOutput array : ";
     for(int i =0 ;i<size; i++){
       cout<<arr[i]<<"  ";
   }
   
}

int main(){
    int arr[100];
    int size;
    
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    
    cout<<"Enter the array elements  :"<<endl;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    cout<<"Input array : ";
    for(int i=0;i<size ;i++){
        cout<<arr[i]<<"  ";
    }
    
    swaps(arr,size);
    
    return 0;
}
