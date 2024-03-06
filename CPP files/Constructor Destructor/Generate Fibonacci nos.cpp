// in this code, input will be the no of terms
// & output is going to be the required no of next fibonacci terms 


#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n1, n2, n3;

public:
    Fibonacci() {  // Default constructor to initialize first two numbers
        n1 = 0;
        n2 = 1;
        n3 = 0;
    }

    void generatedFibonacci(int count) {
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= count; ++i) {
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
            n3 = n1 + n2;
        }
    }
    
    ~Fibonacci(){
      cout<<"\nFibonacci class is destroyed";
    }
};

int main() {
    int count;
    cout << "Enter terms: "<<endl;
    cin >> count;

    Fibonacci obj;  // Create an object of the Fibonacci class
    obj.generatedFibonacci(count);

    return 0;
}
