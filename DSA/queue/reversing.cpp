#include<iostream>
#include<stack>
using namespace std;

class queue{
    int arr[5];
    int front,rear;
    public:
    //making initializing function a constructor
    queue(){
        cout<<"Initialized"<<endl;
        front=0;
        rear=0;
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
        if(isfull()==-1){
            cout<<"Done successfully"<<endl;
            rear++;
            arr[rear]==num;
        }
    }
    int dequeue(){
        if (isempty()==1){
            cout<<"Underflow";
        }
        if(isempty()==-1){
            return arr[front];
            front++;
        }
    }
    void print(){
        while(!isempty()){
            dequeue();
        }
    }

    void reverse(){
        stack<int> s;
        while(!isempty()){
            s.push(dequeue());
        }
        while(s.empty()){
            enqueue(s.top()); 
            s.pop();
        }
    }
};
int main(){
class queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
q.enqueue(60);
q.enqueue(70);
q.enqueue(80);
q.enqueue(90);
q.enqueue(100);
 
q.reverse();
q.print();
return 0;
}