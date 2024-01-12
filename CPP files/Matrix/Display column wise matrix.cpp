// in this code, you need to enter the no of rows and columns of matrix
// after that you need to enter the respective elements of that matrix
// then the insertion of elements took place in the form of column wise insertion and o/p will display the elements in the form of matrix


#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    int rows,cols;
  
    cout<<"enter no of rows: "<<endl;
    cin>>rows;
    cout<<"enter no of columns: "<<endl;
    cin>>cols;
  
    cout<<"enter elements of the matrix: "<<endl;
    for(int i=0;i<cols;i++){           //here,changes made
        for(int j=0;j<rows;j++){       //changes made
            cin>>arr[j][i];            // changes made
        }
    }
  
    cout<<"-----displaying continuous elements row wise-----"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

  return 0;
}
