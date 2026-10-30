#include<iostream>
using namespace std;


int linearsrch(int arr[] , int size , int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
        return 0;
    }
}

int main(){
    int size , key ;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int num[100];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"enter the element you want to search:"<<endl;
    cin>>key;
    int result= linearsrch(num,size,key);
    if (result!=0){
        cout<<"key element found at : "<< result<<endl;
    }
    else{
        cout<<"key element not found in the array"<<endl;

    }
return 0;

}