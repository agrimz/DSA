#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){
    for(int i=1;i<size-1;i++){
        int temp=arr[i];
        int j=i-1;
        for(int j=i-1;j>=0;j--){

            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
int arr[]={5,4,2,1,3};
insertion_sort(arr,5);
return 0;
}