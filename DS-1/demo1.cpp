#include<iostream>
// #include<stdio.h>

using namespace std;

int main(){
    // cout<<"hello world"<<endl;
    int a[10];//Array Declaration
    int b[]={1,2,3,45,6};//Array declaration with initialization
    int c[5]={1,2,3,4,5};//Array declaration with size and initialization

    int *p1 = b;
    cout<<"Addrress of Array : "<<p1<<endl;
    cout<<"Value : "<<*p1<<endl;

    // printf("%d\n",p1);

    // int f = 2;
    // int *p = &f;
    // cout<<"Address of variable : "<<p<<endl;

    return 0;
}