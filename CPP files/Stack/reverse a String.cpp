// here, you need to enter a string
// and the output will be the reverse of that string
// using class and object concepts


#include <iostream>
using namespace std;

class stackCl{
  private:
    char* arr;
    int top,capacity;
    
  public:
    stackCl(int size){
      capacity=size;
      arr=new char[capacity];
      top=-1;
    }
    
    ~stackCl(){
      delete[] arr;
    }
    
    void push(char x){
      if(isfull()){
        cout<<"stack overflow\n";
        return;
      }
      arr[++top]=x;
    }
    
    char pop(){
      if(isempty()){
        cout<<"stack underflow\n";
        return -1;
      }
      return arr[top--];
    }
    
    bool isempty(){
      return top==-1;
    }
    
    bool isfull(){
      return top==capacity-1;
    }
};

string reverseString(string input){
  stackCl s(input.length());
  for(char c:input){
    s.push(c);
  }
  
  string reversedString;
  while(!s.isempty()){
    reversedString+=s.pop();
  }
  
  return reversedString;
}
int main() 
{
    string input="Hello, World!";
    string reversed=reverseString(input);
    
    cout<<"Original string: "<<input<<endl;
    cout<<"Reversed string: "<<reversed<<endl;
    return 0;
}
