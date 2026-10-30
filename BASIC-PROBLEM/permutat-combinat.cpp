//n!=n!/r!(n-r)!

#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    int a= factorial(n);
    int b= factorial(r)*factorial(n-r);
    return a/b;
}

int main(){
    int p ,q;
    cout<<"enter a number and its r value:"<<endl;
    cin>>p>>q;
    if (q>p){
        cout<<"r value should be lessthan n"<<endl;
        return 0;
    }
    else{
    cout<<"ncr of "<<p<<" and "<<q<<" is :"<<ncr(p,q)<<endl;
    }
    return 0;
}