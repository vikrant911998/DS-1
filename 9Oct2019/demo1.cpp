#include<iostream>
using namespace std;

int main(){
    char a[5][5]={"boy","bore","figh","girl","drin"};
    char c='b';

    for(int i=0;i<5;i++){
        
        if(c == a[i][0])
            cout<<a[i]<<endl;
    }

}