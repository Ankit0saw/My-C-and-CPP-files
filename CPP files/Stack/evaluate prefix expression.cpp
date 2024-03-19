// here, user needs to enter a prefix expression
// and the output will be the required solution


#include <iostream>
#include<string>
#include<cmath>
using namespace std;

class pre{
    private:
        int* arr,size,top;
    public:
        pre(int cap){
            arr=new int[cap];
            top=-1;
            size=cap;
        }

        void push(int val){
            arr[++top]=val;
        }
        int pop(){
            return arr[top--];
        }
        void eval(string expr){
            for(int i=size-1;i>=0;i--){
                if(isdigit(expr[i])){
                    push(expr[i]-'0');
                }
                else{
                    int val2=pop();
                    int val1=pop();

                    switch(expr[i]){
                        case '+':
                            push(val2+val1);
                            break;
                        case '-':
                            push(val2-val1);
                            break;
                        case '*':
                            push(val2*val1);
                            break;
                        case '/':
                            push(val2/val1);
                            break;
                        case '^':
                            push(pow(val2,val1));
                            break;
                    }
                }
            }
            if(top!=0){
                cout<<"wrong expression";
            }
            cout<<"res="<<arr[top];
        }
};

int main(){
    string expr;
    cout<<"enter:";
    cin>>expr;
    pre obj(expr.length());
    obj.eval(expr);
    return 0;
}
