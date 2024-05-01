// in this code, user needs to insert a string
// and the output will be the total count of possible palindromic substring (including one sized substring & same substring may be repeated)


#include<iostream>
using namespace std;

int expand(string S,int left,int right,int N){
    int count=0; 
    while(left>=0 && right<N && S[left]==S[right]){
        count++;
        left--;
        right++;
    }
    return count;
}

int CountPS(string S, int N)
{
    int totalCount=0;
    for(int center=0;center<N;center++){
        int oddAns=expand(S,center,center,N); 
        totalCount+=oddAns;
        int evenAns=expand(S,center,center+1,N);
        totalCount+=evenAns;
    }
    return totalCount;
}

int main(){
    string str;
    cout<<"enter string:"<<endl;
    cin>>str;
    int N=str.length();
    int total=CountPS(str,N);
    cout<<"total palindromic string count:"<<total;
    return 0;
}
