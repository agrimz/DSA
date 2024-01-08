#include<iostream>
using namespace std;

class queue{
    int front,rear;
    int arr[10];
    public:
    queue(){
        front =-1;
        rear=-1;
    }
    bool isfull(){
        if(rear==9)
        return true;

        else
        return false;
    }
    bool isempty(){
        if(front==-1 || front>rear){
            return true;
        }
        else
        return false;
    }
    void enqueue(int data){
        if(isfull()){
            cout<<"OverFlow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front =0;
            rear =0;
            arr[rear]=data;    
        }
        else{
            rear++;           
            arr[rear]=data;
        }
    }
    void dequeue(){
        if(isempty()){
            cout<<"UnderFlow"<<endl;
        }
        else if(rear==0 && front==0){
            cout<<arr[front]<<endl;
            rear=-1;
            front=-1;
        }
        else{
            cout<<arr[front]<<endl;
            front++;
        }
    }
    void display(){
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<endl;
            }
        }
    void peek(){
        cout<<arr[front]<<endl;
    }
};
int main(){
queue q;
q.enqueue(1);
q.enqueue(2);
q.peek();
q.enqueue(3);
q.display();
q.dequeue();
q.dequeue();
q.dequeue();
return 0;
}