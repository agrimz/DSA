#include<iostream>
using namespace std;

void binarySearch(int arr[], int num,int l, int r){
    while(l<=r){
    int mid;   
    mid=l+(r-l)/2;
    
    if(arr[mid]==num){
    cout<<"Number found at "<<mid+1<<" position"<<endl;
    return;
    }

    if(arr[mid]>num)
    r=mid-1;
    
    else
    l=mid+1;
    }
    cout<<"Number not found"<<endl;
}
int main(){
int arr[]={1,2,3,4,5};
binarySearch(arr,2,0,4);
return 0;
}