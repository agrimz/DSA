#include<iostream>
#include<string>
using namespace std;

string sortAlhabetically(string s,int size){
    string newStr="";
    for(int i=1;i<size;i++){
        for(int j=i;j>=1;j--){
            if(s[j-1]>s[j]){
                char temp;
                temp=s[j];
                s[j]=s[j-1];
                s[j-1]=temp;
            }
        }
    }
    cout<<s<<endl;
    return s;
}
int main(){
string name="agrim";
sortAlhabetically(name,5);
return 0;
}