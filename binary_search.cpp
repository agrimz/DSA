//code for binary search

#include<iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int num){
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==num){
            return mid;
        }
        else if(arr[mid]<num){
            left=mid+1;
        }
        else{
            right= mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int num= 5;
    int output=binarysearch(arr,0,4,8);
    if(output==-1){
        cout<<"Number not found!!!";
    }
    else{
        cout<<"Number found!!!";
    }
    return 0;
}