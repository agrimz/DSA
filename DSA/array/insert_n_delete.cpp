#include<iostream>
using namespace std;

void deletion(int arr[],int num,int size){
    int loc;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            loc = i+1;
            break;
        }
    }
    for(int j=loc-1;j<size-1;j++){
        arr[j]=arr[j+1];
   }
   size--;
   for(int k=0;k<size;k++){
    cout<<arr[k]<<" ";
   }
}
void insertion(int arr[],int num,int loc,int size){
    for(int i=size;i>=loc;i--){
        arr[i]=arr[i-1];
    }
    arr[loc-1]= num;
    size++;
    for(int k=0;k<size;k++){
    cout<<arr[k]<<" ";
   }
}
int main(){
int arr[]={1,2,3,4,5,18,6,7,8,9};
deletion(arr,18,9);
cout<<endl;
insertion(arr,0,6,8);
return 0;
}