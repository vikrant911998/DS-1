#include<iostream>
using namespace std;

int main(){
    int a[5] = {11,22,33,44,55};
    int l=0,u=4;
    int m= 0;
    int k = 22;

    while(l<=u) {
        m = (l+u)/2;
        if(a[m]==k){
            cout<<"ELement found at index "<<m<<endl;
            break;
        }
        if(k<a[m]){
            u = m-1;
        }
        if(k>a[m])
            l =m+1;
    }

    return 0;
}