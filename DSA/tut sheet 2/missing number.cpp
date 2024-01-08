//Design the Logic to Find a Missing Number in a Sorted Array

#include<iostream>
using namespace std;

int missingnumber(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]!= (i+1)){
            return (i+1);
        }
    }
}
int main(){
int arr[]={1,2,4,5};
int size= sizeof(arr)/sizeof(arr[0]);
cout<<missingnumber(arr, size);
return 0;
}