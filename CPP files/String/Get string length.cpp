// here user will insert any string as input
// the output will tell the length of inserted string


#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"enter any string:"<<endl;
    getline(cin,s);

    int length=0;
    int i=0;
    while(s[i]){
        length++;
        i++;
    }

    cout<<"Length of string: "<<length<<endl;
    return 0;
}
