#include<iostream>
using namespace std;

int main(){
    
    int a[5]={2,-3,1,4,-10};
    int positive= 0;

    for(int i=0;i<5;i++){
        if(a[i]>0){
            positive = a[i];
            break;
        }
    }

    for(int i=0;i<5;i++){
        
        if(a[i]>0 && a[i] <positive)
            positive = a[i];
    }
    cout<<positive<<endl;


    return 0;
}