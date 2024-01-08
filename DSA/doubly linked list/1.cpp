#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int num){
        data=num;
        this->next=NULL;
        this->prev=NULL;
    }
};

class doublyLinkedList{
    public:
    node* head=NULL;

    void insertEnd(int num){
        node* newnode= new node(num);

        if(head==NULL){
            head=newnode;
            newnode->prev=head;
        }
        else{
            node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
        }
    }
    
    void insertBeg(int num){
        node* newnode= new node(num);

        if(head==NULL){
            head=newnode;
            newnode->prev=head;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void deleteEnd(){
        if(head==NULL){
            cout<<"UnderFlow"<<endl;
        }
        else{
            node*temp=head;

            while(temp->next!=NULL){
                temp=temp->next;
            }
            if(temp->prev!=NULL){
                temp->prev->next=NULL;
            }
            else
            head=NULL;

            delete temp;
        }
    }
};
int main(){

doublyLinkedList l;

l.insertEnd(1);
l.insertEnd(2);
l.insertEnd(3);
l.insertBeg(0);
l.deleteEnd();
l.display();
return 0;
}