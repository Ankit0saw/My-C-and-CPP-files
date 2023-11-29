// you need to enter any character as the input
// and the output will tell you either it is alphabet with upper or lower case
// or digit or a special character

#include<iostream>
using namespace std;

int get_case_value(char ch){
     int n;
    if(ch>=65 && ch<=90){
        n=1;
    }
    else if(ch>=97 && ch<=122){
        n=2;
    }
    else if(ch>=48 && ch<=57){
        n=3;
    }
    return n;
}

int main(){
    char ch;
    cout<<"Enter a character :"<<endl;
    cin>>ch;
    
    int num= get_case_value(ch);
    
    switch(num){
        case 1:
            cout<<"UPPER CASE";
            break;
        case 2:
            cout<<"lower case";
            break;
        case 3:
            cout<<"Digit";
            break;
        default:
            cout<<"Special character";
    }
    
    return 0;
}
