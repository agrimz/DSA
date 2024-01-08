// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent
// elements if they are in wrong order. Code the Bubble sort with the following elements: 

#include<iostream>
using namespace std;

void bubblesort(int arr[]){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7-i-1; j++)
        {
            if(arr[j+1]<arr[j]){
                int x;
                x=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=x;
            }
        }   
    } 
}
int main(){
int arr[10]={64,34,25,12,22,11,90};
cout<<"Arranging numbers in ascending order"<<endl;
bubblesort(arr);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
return 0;
}