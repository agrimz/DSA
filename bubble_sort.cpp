#include<iostream>
using namespace std;

void bubblesort(int arr[]){
    for(int i=0;i<5;i++){
        for (int j = 0; j < 4; j++)
        {
            if(arr[j+1]<arr[j]){
                int x= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
        
    }
}
int main(){
int arr[5]={3,5,1,4,2};
bubblesort(arr);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}