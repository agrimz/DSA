#include<iostream>
#include<string.h>
using namespace std;

class stack{
    int arr[10];
    string s;
    int top;

    public:
    void push(string s){
        int size;
        size=s.length();
        for(int i=0;i<size;i++){
            if( s[i]=='(' || s[i]=')' || s[i]='{' || s[i]='}'){
                
            }
        }
    }
};
int main(){
stack s;
string line= "(1+2)";
s.push(line);
s.check();
return 0;
}