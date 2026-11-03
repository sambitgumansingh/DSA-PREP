/*sort 0 , 1 ,2 */

#include<iostream>
#include<algorithm>
using namespace std;

void sort(int arr[] , int size){
    int low =0 , mid=0 , high = size-1;

    while(mid<=high){
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid] , arr[high]);
                high--;
            
        }
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
    cout<<"sorted array is :";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}