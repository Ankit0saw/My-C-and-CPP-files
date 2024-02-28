// all the basic operations to be performed in this code using switch case
// like insertion, deletion and display etc.

#include <iostream>
using namespace std;

// Node structure for circular linked list
struct Node {
    int data;
    Node* next;
};

// Circular linked list class
class CircularLinkedList {
private:
    Node* head;

public:
    // Constructor
    CircularLinkedList() {
        head = nullptr;
    }

    // Destructor to deallocate memory
    ~CircularLinkedList() {
        if (head == nullptr)
            return;
        Node* current = head->next;
        while (current != head) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
    }

    // Function to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Function to insert a node at a specific position
    void insertAtPosition(int value, int position) {
        if (position <= 0) {
            cout << "Invalid position\n";
            return;
        }
        if (position == 1) {
            insertAtBeginning(value);
            return;
        }
        Node* newNode = new Node;
        newNode->data = value;
        Node* temp = head;
        int count = 1;
        while (count < position - 1 && temp != nullptr) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr) {
            cout << "Invalid position\n";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to delete a node at the beginning
    void deleteAtBeginning() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        if (temp == head) {
            delete head;
            head = nullptr;
        } else {
            temp->next = head->next;
            delete head;
            head = temp->next;
        }
    }

    // Function to delete a node at the end
    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* prev = nullptr;
        Node* temp = head;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        if (prev == nullptr) {
            delete head;
            head = nullptr;
        } else {
            prev->next = head;
            delete temp;
        }
    }

    // Function to delete a node at a specific position
    void deleteAtPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        if (position <= 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (position == 1) {
            deleteAtBeginning();
            return;
        }
        Node* prev = nullptr;
        Node* temp = head;
        int count = 1;
        while (count < position && temp->next != head) {
            prev = temp;
            temp = temp->next;
            count++;
        }
        if (count != position) {
            cout << "Invalid position" << endl;
            return;
        }
        prev->next = temp->next;
        delete temp;
    }

    // Function to display the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList list;
    int choice, value, position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at specific position\n";
        cout << "4. Delete at beginning\n";
        cout << "5. Delete at end\n";
        cout << "6. Delete at specific position\n";
        cout << "7. Display the list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
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
                list.deleteAtBeginning();
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
