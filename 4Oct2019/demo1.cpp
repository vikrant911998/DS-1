#include<iostream>
using namespace std;


int main(){
    int a[5] = {12,13,3,15,9};
    int k = 12;
    for(int i=0;i<4;i++){

        for(int j=i+1;j<=4;j++){
            if(a[i]+a[j]==k)
                printf("%d,%d",a[i],a[j]);
        }
    }

    return 0;
}