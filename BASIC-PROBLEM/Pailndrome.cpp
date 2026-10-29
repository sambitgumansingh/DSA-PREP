//pailndrome=121=121

#include<iostream>
using namespace std;

int palindrome(int n){
    int rev=0;
    while(n!=0){
        int dig=n%10;
        rev=(rev*10)+dig;
        n=n/10;
    }
    return rev ;
}

int main(){
    int n;
    cout<<"enter a number to check palidrome: "<<endl;
    cin>>n;
    if(n==palindrome(n)){
        cout<<n<<" is a palindrome number."<<endl;
    }else{
        cout<<n<<" is not a palindrome number."<<endl;
    }
    return 0;
}