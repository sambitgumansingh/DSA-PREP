/*intersection of sorted array*/

#include<iostream>
using namespace std;

void intersection(int a[],int b[] , int n, int m){
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            cout<< "intersectted elements are :  "<<a[i]<<endl;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int m, n;
    cout<<"enter the size :"<<endl;
    cin>>n>>m;

    int a[10];
    int b[10];
    cout<<"enter the elements of 1st array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the elemments of 2nd array ; "<<endl;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    intersection(a,b,n,m);
}