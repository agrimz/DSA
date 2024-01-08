#include<iostream>
using namespace std;

void selection_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i;j<size;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        int temp;
        temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
int array[]={2,5,1,4,3};
selection_sort(array,5);
return 0;
}