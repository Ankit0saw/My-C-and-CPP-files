// this code will rotate an array with k terms 
// eg: arr = [1,2,3,4,5,6,7,8,9] and k=4 the it will shift every elemnts to 4 terms
// o/p => [6,7,8,9,1,2,3,4,5]


#include<iostream>
#include<vector>
using namespace std;

void rotate_arr(vector<int> arr,int s,int k){
    vector<int> temp(arr.size());
  
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%s] = arr[i];
    }
    cout<<"after rotation :"<<endl;
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
  
}

int main(){
    vector<int> arr;
    int k,size,element;
    cout<<"enter size of array :"<<endl;
    cin>>size;
  
    cout<<"enter array elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>element;
        arr.push_back(element);
    }

    cout<<"how many terms to rotate :";
    cin>>k;

    rotate_arr(arr,size,k);
  
    return 0;
}
