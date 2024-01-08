#include<iostream>
using namespace std;

class circularqueue{
    int front,rear;
    int arr[10];
    public:
    
    circularqueue(){
        front=-1;
        rear=-1;
    }
    bool isfull(){
        if(rear==9 && front==0){
            return true;
        }
        if(front==rear+1){
            return true;
        }
        else
        return false;
    }
    bool isempty(){
        if(front==-1 && rear=-1){
            return true;
        }
        if(front>rear){
            return true;
        }
        else
        return false;
    }
    void enqueue(int data){
        if(isfull()){
            cout<<"OverFlow"<<endl;
        }
        //if queue is full
        else if(front==rear==-1){
            front=rear=0;
            arr[rear]=data;
            rear=(rear+1)%9;
        }
        else{
            arr[rear]=data;
            rear=(rear+1)%9;
        }
    }
}
int main(){

return 0;
}