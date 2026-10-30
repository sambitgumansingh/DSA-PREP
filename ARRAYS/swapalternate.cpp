#include<iostream>
#include<algorithm>
using namespace std;


void swapped(int num[],int size){
    for (int i=0;i<size;i++){
        if(i+1<size){
            swap(num[i],num[i+1]);
        }
    }
}


void printarray(int num[], int size){

    cout<<"swapped alternate : "<<endl;
    for (int i=0;i<size;i++){
        cout<<num[i];
    }

}

int main(){
    int size ;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    
    int arr[20];

    for(int i=0 ;i<size;i++){
        cin>>arr[i];
    }

    swapped(arr , size);
    printarray(arr , size);

    return 0;

}
