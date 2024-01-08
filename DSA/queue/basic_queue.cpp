#include<iostream>
using namespace std;

class queue{
    int arr[5];
    int front,rear;
    public:
    //making initializing function a constructor
    queue(){
        // cout<<"Initialized"<<endl;
        front=-1;
        rear=-1;
    }
    int isfull(){
        if(rear==4){
            return 1;
        }
        else
            return -1;
    }
    int isempty(){
        if(front>rear || front==-1){
            return 1;
        }
        else 
            return -1;
    }
    void enqueue(int num){
        if (isfull()==1){
            cout<<"Overflow";
        }
        else if(front==-1 && rear==-1){
            front =0;
            rear =0;
            arr[rear]=num;    
        }
        else{
            rear++;           
            arr[rear]=num;
        }
    }
    void dequeue(){
        if (isempty()==1){
            cout<<"Underflow";
        }
        if(isempty()==-1){
            cout<<arr[front]<<endl;
            front++;
        }
    }
    void peek(){
        cout<<arr[front];
    }
};
int main(){
class queue q;
q.enqueue(2);
q.enqueue(3);
q.peek();
return 0;
}