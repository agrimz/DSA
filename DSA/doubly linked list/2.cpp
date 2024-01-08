#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;
    
    node(int num){
        this->data=num;
        this->next=NULL;
        this->prev=NULL;
    }
};

class doublyLinkedList{
    public:

    node* head;

    void insertAtBeg(int value) {

    node* newnode = new node(value);
    
    if (head == NULL) {
        head = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}


    void insertAtEnd(int value){
        node* newnode = new node(value);
        if(head==NULL){
            head = newnode;
            newnode->prev = head;
            return;
        }

        node* temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
    }

    void printAll(){

        node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }

    }
};

int main(){

doublyLinkedList dll1;

dll1.insertAtEnd(1);
dll1.insertAtEnd(2);
dll1.insertAtEnd(3);
dll1.insertAtEnd(4);

dll1.insertAtBeg(0);

dll1.printAll();

return 0;
}