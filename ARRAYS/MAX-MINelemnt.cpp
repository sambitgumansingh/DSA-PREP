#include<iostream>
using namespace std;

int maxi(int arr[],int n){
    int max=arr[0];
    for (int i=0; i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int mini(int arr[],int n){
    int min=arr[0];
    for (int i=0; i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}




int main(){
    int size;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int num[100];
    cout<<"enter the elements of the array:";
    for (int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"maximum element is :"<<maxi(num,size)<<endl;
    cout<<"minimum element is :"<<mini(num,size)<<endl;
}