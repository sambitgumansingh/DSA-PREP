#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n<0){
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }
    if(n==0 || n==1){
        return 1;
    }
    else{
        for (int i=1; i<=n ;i++){
            fact = fact*i ;
        }
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter a number to find its factorial: "<<endl;
    cin>>n;
    int result= factorial(n);
    if(result != -1){
        cout<<"Factorial of "<<n<<" is: "<<result<<endl;
    }
    return 0;
}