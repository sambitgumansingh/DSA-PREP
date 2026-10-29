//perfect number=6=1+2+3

#include <iostream>
using namespace std;

int perfect(int n){
    int sum=0;
    for (int i=1 ; i<n;i++){
        if (n%i==0){
            sum=sum+i;
        }
        
    }
    return sum; 
}

int main(){
    int n ;
    cout <<"enter a number:"<<endl;
    cin>>n;
    if(n==perfect(n)){
        cout<<n<<" is a perfect number"<<endl;
        for (int i = 1; i < n; i++) { 
            if (n % i == 0) {
                 cout << i; 
                 if (i < n / 2) { 
                    cout << " + "; 
                  }
                 } 
                }
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }
    return 0;
}