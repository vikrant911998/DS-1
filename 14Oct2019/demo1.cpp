#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *p = (int *)calloc(5,2);

    for(int i=0;i<5;i++){
        *(p+i) = 5+i;
    }

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
    }

    return 0;
}