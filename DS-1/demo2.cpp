#include<iostream>
using namespace std;

int main(){
    int a[5]= {12,34,56,75,81};
    int *p = a;

    // a[2] = 500;
    *(p+2) = 500;
    for(int i=0;i<5;i++){
        cout<<*(p+i)<<endl;
    }
    


    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<endl;
    // }

    return 0;
}