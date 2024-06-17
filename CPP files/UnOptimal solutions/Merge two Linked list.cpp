// in this code, user need two give two lists in the main function
// then using print function, display both the lists
// now call a merge function and pass these two lists as paramter
// next merge both lists in ascendeing order and then print 

// t/c=> O(m+n)
// s/c=> O(m+n)  optimal way is to do it in O(1)


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
    newNode->next=head;
    head=newNode;

}
//to print all the elements
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* merge(Node* &list1,Node* &list2,Node* &ans){
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
    Node* list1=new Node(42);
    insert(list1,35); insert(list1,22); insert(list1,18); insert(list1,5);
    cout<<"list1: ";
    print(list1);

    Node* list2=new Node(40);
    insert(list2,25); insert(list2,11); insert(list2,6);insert(list2,3);
    cout<<"list2: ";
    print(list2);
    
    Node* ans=new Node(-1);
    merge(list1,list2,ans);
    cout<<"Merged list: ";
    print(ans->next);

    return 0;    
}
