#include<iostream>
#include<string.h>
using namespace std;

class stack{
    char arr[15];
    int top=-1;
    public:
    void pushc(string st){
        if(isfull()){
            cout<<"OverFlown"<<endl;
        }
        else{
            int length=4;
            for(int i=0;i<=4;i++){
                top++;
                arr[top]=st[i];
            }
        }
    }
    void popc(){
        if(isempty()){
            cout<<"UnderFlown"<<endl;
        }
        else{
            
            for(int i=0;i<=4;i++){
                cout<<arr[top];
                top--;
            }
        }
    }
    bool isfull(){
        if(top==15){
            return true;
        }
        else
        return false;
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else
        return false;
    }
    void push(int data){
        if(isfull()){
            cout<<"Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=data; 
        }
    }
    void pop(){
        if(isempty()){
            cout<<"UnderFlow"<<endl;
        }
        else{
            cout<<arr[top];
            top--;
        }
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void peek(){
        cout<<arr[top];
    }
};

int main(){
stack s;
string name="agrim gupta";
s.pushc(name);
s.popc();
// s.push(1);
// s.push(2);
// s.push(3);
// s.peek();
// s.display();
// s.pop();
// s.pop();
// cout<<endl;
// s.display();
return 0;
}