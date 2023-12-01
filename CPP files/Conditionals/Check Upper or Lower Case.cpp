// input any character
// output will tell either it is small letter or capital letter


#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character :"<<endl;
    cin>>ch;
    
    if( ch >= 'a' && ch <= 'z'){
        cout<<"it is lower case";
    }
    else if ( ch >= 'A' && ch <= 'Z' ){
        cout<<"it is upper case";
    }
    else{
        cout<<"input alphabets only";
    }
    
    return 0;
}
