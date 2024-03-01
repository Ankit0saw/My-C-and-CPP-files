// To perform enqueue and dequeue operations
// also display front and rear element or print the queue as per user's choice


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Queue() {
    //     front = nullptr;
    //     rear = nullptr;
    // }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int item) {
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // Or throw an exception
        }
        Node* temp = front;
        int item = temp->data;
        if (front == rear) {
            front = nullptr;
            rear = nullptr;
        } else {
            front = front->next;
        }
        delete temp;
        return item;
    }

    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // Or throw an exception
        }
        return front->data;
    }

    int rearElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // Or throw an exception
        }
        return rear->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int choice, item;
    Queue queue;

    while (true) {
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front Element\n";
        cout << "4. Rear Element\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> item;
                queue.enqueue(item);
                break;
            case 2:
                cout << "Dequeued element: " << queue.dequeue() << endl;
                break;
            case 3:
                cout << "Front element: " << queue.frontElement() << endl;
                break;
            case 4:
                cout << "Rear element: " << queue.rearElement() << endl;
                break;
            case 5:
                cout << "Queue elements: ";
                queue.display();
                break;
            case 6:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
