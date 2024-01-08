#include<iostream>
using namespace std;

class node{

    public:
    int value;
    node* next;

    node(){
        value =0;
        next= NULL;
    }

    node(int data){
        this->value=data;
        this->next=NULL;
    }
};
class linkedList{
    node* head;
    public:

    linkedList(){
        head=NULL;
    }

    void insert_beg(int data){
        node* newnode= new node(data);
        newnode->next=head;
        head=newnode;
    }
    void insert_end(int data){
        node* newnode= new node(data);

        //if linked list is not yet initialized
        if(head==NULL){
            head=newnode;
            return;
        }

        //otherwise
        //creating a reference variable
        node* temp=head;

        //traveral till last element
        while( temp->next != NULL){
            temp=temp->next;
        }

        //inserting value of newnode address in last element
        temp->next=newnode;
    }
    
    void insert_at_pos(int data, int loc){
        node* newnode= new node(data);

        node*temp=head;
        for(int i=0;i<loc-1;i++){
            temp=temp->next;
            if(temp==NULL){
                cout<<"Invalid Position"<<endl;
            }
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void insert_after(int data,int loc){
        node* newnode= new node(data);

        node*temp=head;
        for(int i=0;i<loc;i++){
            temp=temp->next;
        }
        node* tempnext=temp->next;
        temp=newnode;
        newnode->next=tempnext;
    }

    void insert_before(int data, int loc){
        node* newnode= new node(data);

        node*temp=head;
        for(int i=0;i<loc-1-1;i++){
            temp=temp->next;
        }
        node* tempnext=temp->next;
        temp=newnode;
        newnode->next=tempnext;
    }

    void insert_value(int data, int num){
        node* newnode= new node(data);
        node* temp=head;
        
        while(temp->value!=num){
            temp=temp->next;
        }

        node* tempnext=temp->next;
        temp=newnode;
        newnode->next=tempnext;
    }

    void deletion_beg(){
        if(head==NULL){
            cout<<"UnderFlow"<<endl;
        }
        node* temp=head;
        head=temp->next;
        delete temp;
    }

    void deletion_end(){

        //checking if the linked list is empty
        if(head==NULL){
            cout<<"UnderFlow"<<endl;
        }

        //making two varialbles which will help to get the node at the end and previous to it
        node* temp=head;
        node* prev=NULL;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        //making prev as the last element which will delete last element
        prev->next=NULL;
        delete temp;
    }

    void delete_pos(int num){
        node* temp=head;
        node* prev=NULL;

        for(int i=0;i<num;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
    }

    void search(int data){
        node* temp=head;
        int i=0;

        while(temp!=NULL){
            if(temp->value!=data){
                temp=temp->next;
                i++;
            }
            else if(temp->value==data){
                cout<<"Number is at "<<i<<" position"<<endl;
            }
        }
    }

    void display(){
        node*temp=head;

        if(temp==NULL){
            cout<<"No Element"<<endl;
        }
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
    }
};
int main(){

linkedList l;
l.insert_end(1);
l.insert_end(2);
l.insert_end(3);
l.insert_end(4);
l.insert_end(5);

l.display();
cout<<endl;
l.insert_at_pos(6,2);
l.display();
return 0;
}