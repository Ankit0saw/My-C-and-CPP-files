// in this code, user needs to insert two complex numbers
// according to the operation user needs to perform the code will give the respective output


#include <iostream>
using namespace std;

class demo{
    public:
        int r,i;
        void get(){
            cout<<"enter real part:"<<endl;
            cin>>r;
            cout<<"enter imag part:"<<endl;
            cin>>i;
        }
        void plusput(){
            cout<<r<<"+"<<i<<"i"<<endl;
        }
        void minusput(){
            cout<<r<<""<<i<<"i"<<endl;
        }
        demo operator+(demo bb){
            demo cc;
            cc.r=r+bb.r;
            cc.i=i+bb.i;
            return cc;
        }
        demo operator-(demo bb){
            demo cc;
            cc.r=r-bb.r;
            cc.i=i-bb.i;
            return cc;
        }
};

int main()
{
    demo aa,bb,cc;
    cout<<"insert 1st no:"<<endl;
    aa.get();
    cout<<"insert 2nd no:"<<endl;
    bb.get();
    (aa.i >= 0) ? aa.plusput() : aa.minusput();
    (bb.i >= 0) ? bb.plusput() : bb.minusput();
    
    char ch;
    cout<<"want to + or - (choose anyone):"<<endl;
    cin>>ch;
    if(ch=='+'){
        cc=aa+bb;
    }
    else if(ch=='-'){
        cc=aa-bb;
    }
    else{
        cout<<"invalid choice";
        return 0;
    }
    
    cout<<"Result:";
    (cc.i >= 0) ? cc.plusput() : cc.minusput();
    return 0;
}
