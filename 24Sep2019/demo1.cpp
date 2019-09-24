#include<iostream>
using namespace std;

int main(){
    int size = 8;
    int a[8] = {1,2,3,45,51,2,67,23};
    int i=0,j=0;

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){

            if( a[i]== a[j]){
                cout<<"Duplicate element : "<<a[i]<<endl;
            }
        }
    }


    return 0;
}