// Implement the Binary search algorithm regarded as a fast search algorithm with run-time
// complexity of Ο(log n) in comparison to the Linear Search. 

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
int arr[10];
cout<<"Enter 10 random Numbers: "<<" ";
for(int i=0;i<10;i++){
    cin>>arr[i];
}
int num;
cout<<endl<<"Enter a Number you want to search: ";
cin>>num;
cout<<endl;
int output = binarysearch(arr,0,9,num);
if(output== -1){
    cout<<"Number not found!";
}
else{
    cout<<"Number found!";  
}
return 0;
}