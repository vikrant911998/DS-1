#include<iostream>
using namespace std;
// a= [1,2,3,4,5]

// a= [5,4,3,2,1]
int main(){
    int a[4]={1,2,3,4};
    int len =2;

    // cout<<"Enter the length"<<endl;
    // cin>>len;

    int b[10];
    int k =0;
    for(int i=0;i<=len;i++){
        int sum = 0;
        for(int j=i;j<4;j++){
            if(i != j){
                
                sum = a[i]+a[j];
               
            }
            
        }
        
        
    }

    for(int i=0;i<len;i++){
        cout<<b[i]<<endl;
    }


    return 0;
}