// This program will print the nos. from 1 to 10
// using recursion

#include<iostream>
using namespace std;

class abc {
public:
    void print(int i) {
        if (i <= 10) {
            cout << i << endl;
            print(i + 1);
        }
    }
};

int main() {
    abc obj;
    obj.print(1);
    return 0;
}
