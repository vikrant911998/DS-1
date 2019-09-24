#include<iostream>
using namespace std;

int main(){
    int a[5]={0,1,1,0,1};
    int count = 0;
    for(int i=0;i<5;i++){
        if(a[i]==0)
            count++;
    }

    for(int i=0;i<5;i++){
        if(i<count)
            a[i] = 0;
        else
        {
            a[i] = 1;
        }
    }

    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}