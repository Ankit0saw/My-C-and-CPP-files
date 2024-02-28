// all the basic operations to be performed in this code using switch case
// like insertion, deletion and display etc.

#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the front
    void insertAtFront(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to insert a node at any position
    void insertAtPosition(int value, int position) {
        if (position <= 0) {
            cout << "Invalid position\n";
            return;
        }
        if (position == 1) {
            insertAtFront(value);
            return;
        }
        Node* newNode = new Node;
        newNode->data = value;
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Invalid position\n";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to delete a node at the front
    void deleteAtFront() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Function to delete a node at the end
    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Function to delete a node at any position
    void deleteAtPosition(int position) {
        if (position <= 0) {
            cout << "Invalid position\n";
            return;
        }
        if (position == 1) {
            deleteAtFront();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position\n";
            return;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Function to display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to deallocate memory
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main() {
    LinkedList list;
    int choice, value, position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at front\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at any position\n";
        cout << "4. Delete at front\n";
        cout << "5. Delete at end\n";
        cout << "6. Delete at any position\n";
        cout << "7. Display the list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtFront(value);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert: ";
                cin >> position;
                list.insertAtPosition(value, position);
                break;
            case 4:
                list.deleteAtFront();
                break;
            case 5:
                list.deleteAtEnd();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            case 7:
                cout << "List: ";
                list.display();
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 8);

    return 0;
}
