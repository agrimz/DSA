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
        if(front==-1){
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
    int size(){
        return rear-front;
    }
    void peek(){
        cout<<arr[front]<<endl;
    }
    queue interleave(){
        queue q1;
        int halfsize;
        halfsize=(size()/2);
        for(int i=0;i<=halfsize;i++){
        }
    }
};
int main(){
queue q,q1,q2;
q.enqueue(4);
q.enqueue(7);
q.enqueue(11);
q.enqueue(20);
q.enqueue(5);
q.enqueue(9);


return 0;
}