#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum =0 , i=0;
    
    for(;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;

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

    cout<<"sum of all elements is :"<<sum(num,size)<<endl;
}