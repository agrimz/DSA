#include<iostream>
using namespace std;

int main(){
int arr[]={1,2,3,4,5};
int size=5;
cout<<"Here's array before insertion"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int pos=3;
int num=20;
for(int i=size-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
}
size++;
arr[pos-1]=num;
cout<<"Array after insertion"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<"deleting same element"<<endl;
for(int i=pos-1;i<size;i++){
    arr[i]=arr[i+1];
}
size--;
cout<<"Array after deletion"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}