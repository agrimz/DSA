#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){

    //copying values in seperate arrays
    int mid=(s+e)/2;

    int len1,len2;

    len1= mid-s+1;
    len2= e-mid;

    //making arrays

    int *first=new int [len1];
    int *second=new int [len2];

    int midlen=s;
    for(int i=0;i<len1;i++){
        arr[i]=first[midlen];
        midlen++;
    }

    midlen=mid+1;
    for(int i=0;i<len2;i++){
        arr[i]=second[midlen];
        midlen++;
    }

    //merging both

    int index1,index2;

    index1=0;
    index2=0;

    int mainindex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainindex]=first[index1];
            mainindex++;
            index1++;
        }
        else{
            arr[mainindex]=second[index2];
            mainindex++;
            index2++;
        }
    }
    while(index1<len1){
        arr[mainindex]=first[index1];
        mainindex++;
        index1++;
    }
    while(index2<len2){
        arr[mainindex]=second[index2];
        mainindex++;
        index2++;
    }


}
void merge_sort(int arr[],int start,int end){
    
    //exclusive if condition
    if(start>=end){
        return;
    }
    //finding mid
    int mid=(start+end)/2;

    //sorting left array
    merge_sort(arr,start,mid);

    //sorting right array
    merge_sort(arr,mid+1,end);
    
    //merging
    merge(arr,start,end);

}
int main(){
int arr[5]={0,5,2,8,3};
int n=5;

merge_sort(arr,0,n-1);
for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
return 0;
}