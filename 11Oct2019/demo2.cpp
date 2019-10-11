#include<iostream>
using namespace std;

int main(){
    int a[5];
    int *p = a;
    
    

    for(int i=0;i<5;i++){
        cin>>*(p+i);
    }

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<endl;
    }


    // cout<<"pointer "<<p<<endl;
    // cout<<"array variable "<<a<<endl;
    

    // int a = 45;
    // int *p = &a;

    // cout<<*p<<endl;

    return 0;
}