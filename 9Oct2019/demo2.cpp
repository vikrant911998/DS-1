#include<iostream>
using namespace std;

int main(){
    int a[7] = {21,12,32,14,15,27,9};
    int length = 7;
    int k = 4;
    int max = 0;

    for(int i=0;i<=length-k;i++){
        max = a[i];
        for(int j=i;j<i+k;j++){
            if(a[j]>max)
                max = a[j];
        }
        cout<<"Max is "<<max<<endl;
        cout<<endl;
    }

    return 0;
}