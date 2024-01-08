#include<iostream>
using namespace std;

int linearSearch(int arr[],int num,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i+1;
            break;
        }
        else 
            return -1;;
    }
}
int main(){
int arr[]={1,2,3,4,5,6,7};
linearSearch(arr,5,7);
}