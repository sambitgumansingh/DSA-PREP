#include<iostream>
#include<cmath>
using namespace std;

int arithmetic(int a , int b ,int n, char op){
    if(op=='a'){
        for (int i=1;i<=n;i++){
            cout<<a<<" "<<endl;
            a=a+b;
        }
    }
    else if(op=='s'){
        int ans;
        ans=a+(n-1)*b;
        cout<<"nth term is :"<<ans<<endl;

    }
    else if (op=='m'){
        int sn;
        sn=(n/2)*(2*a+(n-1)*b);
        cout<<"sum of n terms is :"<<sn<<endl;
    }

    else if(op=='b'){
        int r;
        cin>>r;
        for (int i=1;i<=n;i++){
            cout<<a<<" "<<endl;
            a=a*r;
        }
    }
    else if(op=='p'){
        int r,sn;
        cin>>r;
        sn=(a*(pow(r,n)-1))/(r-1);
        cout<<"sum of n terms is :"<<sn<<endl;
    }


    else if(op=='g'){
        int r,ans;
        cin>>r;
        ans=a*pow(r,n-1);
        cout<<"nth term is :"<<ans<<endl;
    }

    else{
        cout<<"invalid input"<<endl;
    }
}

int main(){
    int a , b , n;
    char op;
    cout<<"enter first term, common difference/ratio, number of terms and operation:"<<endl;
    cin>>a>>b>>n;
    cout<<"enter the operation you want to perform b/w AP OR GP (a/s/m/b/p/g):"<<endl;
    cin>>op;
    arithmetic(a,b,n,op);
    return 0;
}