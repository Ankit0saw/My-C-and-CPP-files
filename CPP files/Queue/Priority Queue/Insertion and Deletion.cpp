// insert new elements into the queue and per their priority while maintaining their priority order
// delete the element with highest priority i.e. front element
// also display all the elements of the queue with their priority


#include <iostream>
using namespace std;

struct Node {
    int value;
    int priority;
    Node* next;
};

class PriorityQueue {
private:
    Node* front;

public:
    PriorityQueue(){
        front=nullptr;
    }

    void insert(int value, int priority) {
        Node* new_node = new Node;
        new_node->value = value;
        new_node->priority = priority;
        new_node->next = nullptr;

        if (front == nullptr || priority > front->priority) {
            new_node->next = front;
            front = new_node;
        } else {
            Node* current = front;
            while (current->next != nullptr && priority <= current->next->priority) {
                current = current->next;
            }
            new_node->next = current->next;
            current->next = new_node;
        }
    }

    int dequeue() {
        if (front == nullptr) {
            cout<< "Queue is empty!" <<endl;
            return -1; // Return a default value indicating failure
        }
        int value = front->value;
        Node* temp = front;
        front = front->next;
        delete temp;
        return value;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void display() {
        if (front == nullptr) {
            cout<< "Priority Queue is empty" <<endl;
            return;
        }
        cout<< "Priority Queue elements:" <<endl;
        Node* current = front;
        while (current != nullptr) {
            cout << "Value: " << current->value << ", Priority: " << current->priority <<endl;
            current = current->next;
        }
    }

    ~PriorityQueue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    PriorityQueue pq;
    int choice, value, priority;

    while (true) {
        cout<< "Priority Queue Operations:" <<endl;
        cout<< "1. Insert" <<endl;
        cout<< "2. Dequeue" <<endl;
        cout<< "3. Display" <<endl;
        cout<< "4. Exit" <<endl;
        cout<< "Enter your choice: ";
        cin>> choice;

        switch (choice) {
            case 1:
                cout << "Enter value and priority: ";
                cin >> value >> priority;
                pq.insert(value, priority);
                break;
            case 2:
                if (!pq.isEmpty()) {
                    cout << "Dequeued element: " << pq.dequeue() <<endl;
                } else {
                    cout << "Queue is empty!" <<endl;
                }
                break;
            case 3:
                pq.display();
                break;
            case 4:
                cout << "Exiting program..." <<endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." <<endl;
        }
    }
    return 0;
}
