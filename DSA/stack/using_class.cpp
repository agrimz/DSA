// stack using class and array

#include<iostream>
using namespace std;

class stack{
    int top=-1;
    int element[5];
    public:

    stack(){
        cout<<"Stack is initialized"<<endl;
        // top=0;
    }
    bool isfull(){
        if (top==4){
            return true;
        }
        else
            return false;
    }
    bool isempty(){
        if(top==-1 || top==0){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int num){
        if(isfull()){
            cout<<"OverFlow"<<endl;
        }
        else{
            top++;            
            element[top]=num;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"UnderFlow"<<endl;
        }
        else{
            cout<<element[top]<<endl;
            top--;
        }
    }
    void first(){
        if(isempty()){
            cout<<"UnderFlow"<<endl;
        }
        else{
            cout<<element[top]<<endl;
        }
    }
    void print(){
        for(int i=top;i>=0;i--){
            cout<<element[i]<<" ";
        }
    }
    void peek(){
        cout<<endl<<"Element at the top is "<<element[top]<<endl;
    }
};

int main(){

//push pop peek print first isfull isempty
stack s;
// s.pop();
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
// s.push(6);

s.print();
s.peek();
return 0;
}