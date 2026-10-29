#include <iostream>
using namespace std;

int reverse(int n){
    int ans=0;
    while(n!=0){
        int dig= n%10;
        ans=(ans*10)+dig;
        n=n/10;
    }
    return ans ;
}

int main(){
    int n;
    cout<<"enter a number for reverse :"<<endl;
    cin>>n;
    int result = reverse(n);
    cout<<"the reverse of "<<n<<" is :"<<result<<endl;
    return 0;
}