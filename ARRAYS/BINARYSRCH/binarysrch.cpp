#include<iostream>   ///ITS ONLY APPLICABLE FOR SORTED ARRAy
using namespace std;

int binsrch(int arr[] , int size , int target){

    int s=0;
    int e = size-1;
    

    while(s<=e){
        int mid = s+(e-s)/2;
        if (arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
    

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

    int ans = binsrch(arr,size,target);
    if(ans==-1){
        cout<<"element not found "<<endl;
    }
    else{
        cout<<"element found at index : "<<ans<<endl;
    }
}