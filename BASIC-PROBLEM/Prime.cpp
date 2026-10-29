#include<iostream>
using namespace std;

int prime(int n){
    bool isprime=1;
    for (int i=2; i<=n; i++){
        if (n%i==0){
            cout<<n<<" is not a prime number."<<endl;
            isprime=0;
            break;
        }
        return isprime ; 
    }
}

int main(){
    int n;
    cout <<"enter the number to check the prime:"<<endl;
    cin>>n;
    int result=prime(n);
    if (result==0){
        cout<<n<<"is not a prime"<<endl;
      }  else{
            cout<<n<<"is a prime"<<endl;
        }
        return 0;
    }
