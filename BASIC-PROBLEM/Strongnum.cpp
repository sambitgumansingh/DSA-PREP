//strong number= 145=1!+4!+5!=1+24+120=145

#include <iostream>
using namespace std;

int strong(int n){
    int sum=0;
    while(n!=0){
        int dig = n%10;
        int fact=1;
        for (int i=1;i<=dig;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10 ;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int result=strong(n);
    if(n==result){
        cout<<n<<" is a strong number"<<endl;
    }
    else{
        cout<<n<<" is not a strong number"<<endl;
    }
    return 0;
}