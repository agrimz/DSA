#include<iostream>
#include<string.h>
using namespace std;

class stack{
    char arr[20];
    string s;
    int top;
    public:
    void push(string s){
        int size=s.length();
        for(int i=0;i<=size;i++){
            arr[i]=s[i];
        }
        top=size-1;
    }
    void pop_all(){
        for(int i=top;i>=0;i--){
            cout<<arr[i];
        }
    }
};
int main(){
stack s;
string line="DataStructure";
s.push(line);
s.pop_all();
return 0;
}