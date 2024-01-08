#include<iostream>
using namespace std;

void traversal(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";;
    }
}
void linearsearch(int arr[], int x){
    int a;
    int index;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            a=1;
            index=i+1;
            break;
        }
        else 
            a=-1;
    }
    if(a==1)
        cout<<"Number found at "<<index<<endl;
    else
        cout<<"Number not found"<<endl;

}
void binarysearch(int arr[],int x){
    int l=0;
    int r=4;
    int c;
    int index1;
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
            c=1;
            index1=mid+1;
            break;
        }
        else if(arr[mid]>x){
            r=mid-1;
        }
        else
            l=mid+1;
    }
    if(c==1)
        cout<<"Number found at "<<index1<<endl;
    else
        cout<<"Number not found"<<endl;
}
void insertion(int arr[], int number,int loc){
    for(int i=4;i>loc-1;i--){
        arr[i+1]=arr[i];
    }
    arr[loc-1]=number;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";;
    }
}

int main(){

int option;
int arr[4];
//taking array
cout<<"Enter elements of an array"<<endl;
for(int i=0;i<5;i++){
    cin>>arr[i];
    cout<<" ";
}
//asking for input
cout<<endl<<"select any operation from the list"<<endl;
cout<<"1. Print the array(traversal)"<<endl;
cout<<"2. search in array(linear)"<<endl;
cout<<"3. search in array(binary)"<<endl;
cout<<"4. Insert an element"<<endl;
cout<<"5. Delete an element"<<endl;
cout<<"6. Bubble sort"<<endl;
cin>>option;

//setting the switch statements
switch(option){
case 1:
    traversal(arr);
case 2:
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    linearsearch(arr,num);
case 3:
    cout<<"Enter number"<<endl;
    cin>>num;
    // bubblesort(arr);
    binarysearch(arr,num);
case 4:
    int pos;
    cout<<"Enter number and position"<<endl;
    cin>>num;
    cin>>pos;
    insertion(arr,num,pos);
// case 5:
//     deletion();
// case 6:
//     bubblesort();
}
return 0;
}