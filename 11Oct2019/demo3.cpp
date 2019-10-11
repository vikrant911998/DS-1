#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *p = (int *)malloc(2);
    *p = 100;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}