// for a given matrix in input
// the output will be its transpose form in matrix


#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"enter no. of rows: "<<endl;
    cin>>rows;
    cout<<"enter no. of cols: "<<endl;
    cin>>cols;

    int arr[rows][cols];
    
    cout<<"input: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"before transpose: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"after transpose: "<<endl;
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
}
