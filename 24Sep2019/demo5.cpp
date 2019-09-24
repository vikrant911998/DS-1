#include<iostream>
using namespace std;

int main(){
    int a[10];
    int size=0;
    cout<<"enter the number of elements"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>a[i];
    }
    cout<<"array Elements : "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    int index=0;
    cout<<"Enter the index"<<endl;
    cin>>index;
    
    for(int i=index;i<size;i++){
        a[i] = a[i+1];
    }
    a[size-1] = 0;

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    

    return 0;
}