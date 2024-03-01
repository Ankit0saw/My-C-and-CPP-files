// To perform enqueue and dequeue operations
// also display front and rear element or print the queue as per user's choice


#include <iostream>
using namespace std;

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1, size = 0;

bool isFull() {
    return size == MAX_SIZE;
}

bool isEmpty() {
    return size == 0;
}

void enqueue(int item) {
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }
    if (isEmpty())
        front = 0;
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = item;
    size++;
}

int dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Or throw an exception
    }
    int item = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
    size--;
    return item;
}

int frontElement() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Or throw an exception
    }
    return queue[front];
}

int rearElement() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Or throw an exception
    }
    return queue[rear];
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    int index = front;
    while (index != rear) {
        cout << queue[index] << " ";
        index = (index + 1) % MAX_SIZE;
    }
    cout << queue[rear] << endl;
}

int main() {
    int choice, item;

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
                enqueue(item);
                break;
            case 2:
                cout << "Dequeued element: " << dequeue() << endl;
                break;
            case 3:
                cout << "Front element: " << frontElement() << endl;
                break;
            case 4:
                cout << "Rear element: " << rearElement() << endl;
                break;
            case 5:
                cout << "Queue elements: ";
                display();
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
