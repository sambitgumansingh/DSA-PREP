//GREATEST COMMON DIVISOR (GCD) OF TWO NUMBERS

#include<iostream>
using namespace std;

int gcd(int a, int b){
   while(b!=0){ 
    int temp=b;
    b=a%b;
    a=temp;
   }
   return a;
}

int main(){
    int m , n;
    cout <<"enter two number:"<<endl;
    cin>>m>>n;
    int result=gcd(m,n);
    cout<<"the gcd of "<<m<<" and "<<n<<" is:"<<result<<endl;

    return 0;
}