/*pair sum in sorted array*/
#include<iostream>
using namespace std;

void pairsum(int arr[] , int s , int target){
    for (int i=0;i<s;i++){
        for(int j=0 ; j<s;j++){
            if(arr[i]+arr[j]==target){
                cout<<"the pair sum is :"<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}

int main(){
    int s;
    cout<<"enter the size of arrayy: "<<endl;
    cin>>s;

    int arr[10];
    cout<<"enter the elements of array  : "<<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target sum: "<<endl;
    cin>>target;
    pairsum(arr,s,target);
}