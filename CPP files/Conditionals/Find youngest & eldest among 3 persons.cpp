//here, user needs to insert name and age of 3 persons
//and the code will determine and youngest and eldest among them


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[3];
    string brr[3];

    for(int i=0;i<3;i++){
        cout<<"enter name of person "<<i+1<<":"<<endl;
        cin>>brr[i];
        cout<<"enter age of person "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    int max=arr[0]>arr[1]?arr[0]>arr[2]?arr[0]:arr[2]:arr[1]>arr[2]?arr[1]:arr[2];
    int min=arr[0]<arr[1]?arr[0]<arr[2]?arr[0]:arr[2]:arr[1]<arr[2]?arr[1]:arr[2];

    int* max_i=find(&arr[0],arr+3,max);
    int* min_i=find(&arr[0],arr+3,min);

    cout<<"-----RESULT-----"<<endl;
    cout<<"Eldest is "<<brr[max_i-arr]<<" with age "<<arr[max_i-arr]<<endl;
    cout<<"Youngest is "<<brr[min_i-arr]<<" with age "<<arr[min_i-arr]<<endl;
    return 0;
}
