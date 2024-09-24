// in this code, user needs to insert two sorted list elements
// the output is the merged list of both elements in sorted order


#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

//to insert at beginning
void insert(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
    }
    else{
        Node* current=head;
        while(current->next){
            current=current->next;
        }
        current->next=newNode;
    }

}
//to print all the elements
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void merge(Node* list1,Node* list2,Node* &ans){
    // a pointer to point at the last element of ans list
    Node* ptr=ans;

    // to compare the elements from both the list
    while(list1!=NULL && list2!=NULL){
        if(list1->data<list2->data){
            Node* temp=new Node(list1->data);
            ptr->next=temp;
            list1=list1->next;
        }
        else{
            Node* temp=new Node(list2->data);
            ptr->next=temp;
            list2=list2->next;
        }
        ptr=ptr->next;
    }
    //if list2 becomes empty i.e. list1 still have some elements
    while(list1!=NULL){
        Node* temp=new Node(list1->data);
        ptr->next=temp;
        list1=list1->next;
        ptr=ptr->next;
    }
    //if list1 becomes empty i.e. list2 still have some elements
    while(list2!=NULL){
        Node* temp=new Node(list2->data);
        ptr->next=temp;
        list2=list2->next;
        ptr=ptr->next;
    }
}

int main(){
    int size1,size2,value;
    cout<<"Enter the number of elements for list 1: ";
    cin>>size1;
    Node* list1=nullptr; // Initialize an empty list
    cout<<"Enter "<<size1<<" elements in sorted order for list 1: ";
    for (int i=0;i<size1;++i){
        cin>>value;
        insert(list1,value);
    }
    cout<<"list1: ";
    print(list1);

    cout<<"Enter the number of elements for list 2: ";
    cin>>size2;
    Node* list2=nullptr; // Initialize an empty list
    cout<<"Enter "<<size2<<" elements in sorted order for list 2: ";
    for (int i=0;i<size2;++i){
        cin>>value;
        insert(list2, value);
    }
    cout<<"list2: ";
    print(list2);
    
    Node* ans=new Node(-1); // Dummy node for merged list
    merge(list1,list2,ans);
    cout<< "Merged list in sorted order: ";
    print(ans->next); // Skip dummy node

    return 0;  
}
