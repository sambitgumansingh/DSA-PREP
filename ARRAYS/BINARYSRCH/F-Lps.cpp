/*finding first and last position of an elemnt in a sorted array*/

#include<iostream>
using namespace std;

void firstpos(int arr[] , int size , int target){
    int s=0, e=size-1 , ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if (arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if (arr[mid]<target){
            s=mid+1;

        }
        else{
           e=mid-1;
        }
    }
    cout<<"the first position of the element is : "<<ans<<endl;
}


void lastpos(int arr[] , int size , int target){
    int s=0, e=size-1 , ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if (arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if (arr[mid]<target){
            s=mid+1;

        }
        else{
           e=mid-1;
        }
    }
    cout<<"the last position of the element is : "<<ans<<endl;
}

int main(){
    int size;
    cout<<"enter the size of array :"<<endl;
    cin>>size;

    int arr[10];
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target element :"<<endl;
    cin>>target;

    firstpos(arr,size,target);
    lastpos(arr,size,target);
}
