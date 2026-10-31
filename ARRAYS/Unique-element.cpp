
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of a arr: "<<endl;
    cin>>size;

    int arr[20];

    cout<<"enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    cout<<"unique key is : "<<ans<<endl;
    return 0;

}