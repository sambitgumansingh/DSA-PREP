//Fabonacci series in C++ = 0+1+1+2+3+5+8+13+21+34+55+89+144

#include <iostream>
using namespace std;

int main(){
    int n ,a , b;
    cout<<"enter number of terms to print fibonacci series: "<<endl;
    cin>>n;
    cout<<"from where you want to start the series :"<<endl;
    cin>>a>>b;
    cout<<"fibonacci series: "<<a<<" "<<b<<" ";
    for(int i=0; i<=n ; i++){
        int c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0 ;
}