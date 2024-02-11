// input is going to be 24 hours time format
// output will be determining it is in AM or PM


#include <iostream>
using namespace std;

int main() {
    int h, m;

    cout << "Input The time in 24 hours format in Given Sequence " << endl;
    cout << "input Hours : ";
    cin >> h;
    cout << "Input Minutes : ";
    cin >> m;

    if (h >= 0 && h <= 11) {
        cout << "Time is in AM" << endl;
    } else if (h >= 12 && h <= 23) {
        cout << "Time is in PM" << endl;
    } else {
        cout << "Invalid time input" << endl;
    }

    return 0;
}
