#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n , i=1,ans=0;
    cout<<"enter a binary number:"<<endl;
    cin>>n;
    while(n!=0){
        int dig=n%10;
        if(dig==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"decimal number is :"<<ans<<endl;
    return 0;
}