//find a duplicate


///limitation: Array has n elements with values in range 1 to n-1
//Exactly one duplicate exists
//so 2,3,3,4 doesnt compile

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size:"<<endl;
    cin>>n;

    int arr[10];
    cout<<"enter the elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;

    for (int i=0; i<n;i++){
        ans=ans^arr[i];
    }
    for (int i=1; i<n;i++){
        ans=ans^i;
    }
    cout<<"the duplicate element is: "<<ans<<endl;
    return 0;
}