// in input, user needs to enter a string
// output will be the reverse of the inserted string


#include<iostream>
using namespace std;
class string_reverse{
    private:
        string ip,op;
        int top,size;
        char arr[];
    public:
        string_reverse(){
            top=-1;
        }

        void get(){
            cout<<"ip=";
            cin>>ip;
            size=ip.length();
        }
        char push(char val){
            if(top>=size){
                cout<<"overflow";
            }
            else{
                arr[++top]=val;
            }
        }
        int pop(){
            if(top<0){
                cout<<"underflow";
            }
            else{
                return arr[top--];
            }
        }
        void reverse(){
            for(int i=0;i<size;i++){
                push(ip[i]);
            }
            for(int i=0;i<size;i++){
                op+=pop();
            }
            cout<<"op=";
            for(int i=0;i<size;i++){
                cout<<op[i];
            }
        }
};
int main(){
    string_reverse obj;
    obj.get();
    obj.reverse();
    return 0;
}
