// **C++ program to find the difference between product and sum of digits of a integer

#include<iostream>
using namespace std;
int subtract(int n){
    int sum =0;
    int pro=1;
    while(n!=0){
        int digit = n%10;
        pro = pro*digit;
        sum=sum+digit;
        n=n/10;

    }
    int ans = pro-sum ;
    return ans;

}

int main(){
    int n;
    cout<<"enter a number you want to find differnce :"<<endl;
    cin >>n;
    int result= subtract(n);
    cout<<"the difference between product and sum of digits of "<<n<<" is :"<<result<<endl;
    return 0;
}