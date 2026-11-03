/*no two number in the array has same number of occurence */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int a [10];
    cout<<"enter the elements: "<<endl;

    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int freq[10]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                freq[i]++;
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i]!=a[j]&& freq[i]==freq[j]){
                cout<<"two numbers DO have same occurrence"<<endl;
                return 0;
            }
        }
    
}
cout<<"all the numbers in the array has different number of occurence "<<endl;
return 0;
}