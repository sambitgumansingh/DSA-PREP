//armstrong number= 153=1^3+5^3+3^3=1+125+27

#include<iostream>
using namespace std;

int armstrong(int n){
    int sum=0;
    while(n!=0){
        int digit= n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    return sum ;
}

int main(){
    int s;
    cout<<"enter a number for armstrong:"<<endl;
    cin>>s;
    if(s==armstrong(s)){
        cout<<s<<" is an armstrong number"<<endl;
    }
    else{
        cout<<s<<" is not an armstrong number "<< endl;
    }
    return 0;
}