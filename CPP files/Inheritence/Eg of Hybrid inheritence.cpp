// in this eg, animal
//             mammal    herbivore
//              cow
// (animal & herbivore are base class. mammal inherits from animal class. cow inherits from both mammal and herbivore)


#include<iostream>
using namespace std;

class Animals{
    public:
        void print(){
            cout<<"this is an animal"<<endl;
        }
};
class mammals:public Animals{
    public:
        void show(){
            cout<<"this is a mammal"<<endl;
        }
};
class herbivores{
    public:
        void display(){
            cout<<"this is a herbivore"<<endl;
        }
};
class cow:public mammals, public herbivores{
    public:
        void get(){
            cout<<"cow is a herbivore mammal animal"<<endl;
        }
};

int main(){
    cow obj;
    obj.print();
    obj.show();
    obj.display();
    obj.get();
    return 0;
}
