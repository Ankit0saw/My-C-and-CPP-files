// To perform push and pop operations
// also display the top element or print the stack as per user's choice


#include <iostream>
using namespace std;

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1,size = 0;

bool isEmpty() {
    return size == 0;
}

bool isFull() {
    return size == MAX_SIZE;
}

void push(int item) {
    if (isFull()) {
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    stack[top] = item;
    size++;
}

int pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1; // Or throw an exception
    }
    int item = stack[top];
    top--;
    size--;
    return item;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1; // Or throw an exception
    }
    return stack[top];
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    int choice, item;

    while (true) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> item;
                push(item);
                break;
            case 2:
                cout << "Popped element: " << pop() << endl;
                break;
            case 3:
                cout << "Top element: " << peek() << endl;
                break;
            case 4:
                cout << "Stack elements: ";
                display();
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }
    return 0;
}
