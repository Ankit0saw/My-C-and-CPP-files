// eg: i/p => lab 
// then o/p => l, la, lab, a, ab, b  (i.e. all the substrings)
// also count the substrings and display


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    long long count=0;
    cout<<"Enter the string :"<<endl;
    cin>>s;

    cout<<"All possible substrings are:"<<endl;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<s.length();j++){
            for(int k=i;k<=j;k++){
                cout<<s[k];
            }
            count++;
            cout<<endl;
        }
    }
    cout<<"Total no of Substrings: "<<count<<endl;
}
