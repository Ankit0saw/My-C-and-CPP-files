// in this code, you need to enter size of 1st array then insert it's elements
// next you need to enter size of 2nd array thrn insert it's elements
// now you need to enter the pair sum, and the code will find all the pairing elements with both array contributing one element


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    vector<int> brr;
    int data,sum=0;
    int s1,s2;

    cout<<"enter size of 1st array :"<<endl;
    cin>>s1;
    cout<<"enter elemnets"<<endl;
    for(int i=0;i<s1;i++){
        cin>>data;
        arr.push_back(data);
    }

    cout<<"enter size of 2nd array :"<<endl;
    cin>>s2;
     cout<<"enter elemnets"<<endl;
    for(int i=0;i<s2;i++){
        cin>>data;
        brr.push_back(data);
    }

    cout<<"enter sum value :"<<endl;
    cin>>sum;

    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr[i]+brr[j]==sum){
                cout<<"pair :"<<arr[i]<<" & "<<brr[j]<<endl;
            }
        }
    }
    return 0;
}
