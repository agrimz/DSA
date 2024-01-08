#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
int arr[]={2,1,3,5,4};
bubblesort(arr,5);
return 0;
}