#include<iostream>
using namespace std;

int main(){
    int a[10];
    int size;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>a[i];
    }

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}