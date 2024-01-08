#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;
    node(int num){
        this->value=num;
        this->next=NULL;
    }
};
class linkedlist{
    public:
    node*head=NULL;

    void insert(int num){
        node* newnode= new node(num);
        if(head==NULL){
            head=newnode;
            return;
        }
            node* temp=head;
            while(temp!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
    }
    void display(){
        node*temp=head;
        if(head==NULL){
            cout<<"No Element"<<endl;
        }
        else{
            while(temp!=NULL){
                cout<<temp->value<<" ";
                temp=temp->next;
            }
            cout << endl;
        }
    }
    void reverse(){
        if(head==NULL|| head->next==NULL){
            return;
        }
        else{
            node*current=head;
            node*forward=NULL;
            node*prev=NULL;

            while(current!=NULL){
                forward=current->next;
                current->next=prev;
                prev=current;
                current=forward;
            }
            head=prev;
        }
    }
};
int main(){
linkedlist l;
l.insert(1);
l.insert(2);
l.insert(3);
l.insert(4);
l.insert(5);
l.reverse();
l.display();
return 0;
}