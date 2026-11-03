/*sort 0 and 1 in an array*/

#include<iostream>
#include<algorithm>
using namespace std;

void sort (int arr[] , int size){
    int s=0;
    int e=size-1;

    while(s<e){
        if (arr[s]==1&& arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]==0){
            s++;
        }
        else if (arr[e]==1) {
            e--;
        }
    }

}

void print(int arr[] , int sup){
    cout<<"sorted array is :";
    for (int i=0;i<sup;i++){
        cout<<arr[i]<<" ";
    }
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
    sort(arr,size);
    print(arr,size);
}