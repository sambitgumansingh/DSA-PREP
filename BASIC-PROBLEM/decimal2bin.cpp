#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n , i =0 , ans =0;
    cout <<"enter a decimal number:"<<endl;
    cin>>n;
    while(n!=0){
        int dig= n%2;
        ans= ans+dig*pow(10,i);
        n=n/2;
        i++;
    }
    cout<<"binary number is:"<<ans<<endl;
    return 0;
}