//**duplicate in an array**

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size:"<<endl;
    cin>>n;

    int arr[10];
    cout<<"enter the elemnts : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq[11]={0};

    for(int i=0;i<n;i++){
        int index=arr[i];
        freq[index]=freq[index]+1;
    }
    for(int v=0;v<=n;v++){
        if(freq[v]>1){
            cout<<"the duplicate element is: "<<v<<endl;
            
        }
    }
    return 0;
}