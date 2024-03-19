// here, user needs to enter a postfix expression into the console
// and the code will give the required output


#include <iostream>
#include<string>
using namespace std;
class post{
    private:
        int* arr,top,size;
    public:
        post(int cap){
            top=-1;
            arr= new int[cap];
            size=cap;
        }
        
        void push(int val){
            arr[++top]=val;
        }
        int pop(){
            return arr[top--];
        }
        
        void eval(string expr){
            for(int i=0;i<size;i++){
                if(isdigit(expr[i])){
                    push(expr[i]-'0');
                }
                else{
                    int val1=pop();
                    int val2=pop();
                    
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
                    }
                }
            }
            cout<<arr[top];
        }
};
int main()
{
    string expr;
    cout<<"enter:";
    cin>>expr;
    post obj(expr.length());
    obj.eval(expr);
    return 0;
}
