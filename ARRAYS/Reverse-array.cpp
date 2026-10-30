#include <iostream>
using namespace std;


void revarr(int arr[], int size){
    int s=0, e= size-1;
    while(s<e){
        int temp = arr[s];  
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
        e--;
    }

}

void printarray(int num[] , int size){
    cout<<"reversed array : " <<endl;
    for(int j=0; j<size ; j++){
        cout<<num[j];
    }


}

int main(){
    int size ;
    cout<<"enter the size of array : "<<endl;
    cin>>size;

    int num[20];
    cout<<"enter the elemnts in the array : "<<endl;
    for (int i=0;i<size;i++){
        cin>>num[i];
    }
    
    revarr(num , size);
    printarray(num , size);

    return 0;
}
    