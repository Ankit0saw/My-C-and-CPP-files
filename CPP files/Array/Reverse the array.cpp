// this program will reverse the array elements
// eg: arr= 1 2 3 4 5 then o/p =  5 4 3 2 1

#include <iostream>
using namespace std;

int main(){
    int arr[]={2,5,1,9,4,8};
    int size=6;                       
    int start=0; 
    int end = size -1 ;
    
   while(start<=end){        // running loop till mid of array to swap them all
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
   
   for(int i =0 ;i<size; i++){
       cout<<arr[i]<<"  ";     // displaying the reversed array
   }
}
