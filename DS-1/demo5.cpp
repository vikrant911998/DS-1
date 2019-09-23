#include<iostream>
using namespace std;

//Linear Search

// {1,2,3,4,5,2,7,8,9};
int main(){ 
    int a[5]={12,23,34,45,56};
    int k = 45,j=0;
    for(int i=0;i<5;i++){
        if(a[i]==k){
            j=1;
            cout<<"Equal element is "<<a[i]<<endl;
        }
        // else{
        //    cout<<"Not equal"<<endl; 
        // }
    }
    if(j==0)
        cout<<"Not equal"<<endl;

    return 0;
}