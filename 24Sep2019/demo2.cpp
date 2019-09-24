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
    int number =0 ;
    cout<<"Enter the number to be inserted"<<endl;
    cin>>number;

    for(int i=size;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] = number;

    cout<<"array after :"<<endl;
    for(int i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}