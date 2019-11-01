#include<iostream>
using namespace std;

int count(int number,int c){
    if(number == 0)
        return c;

    if(number %10 == 0)
        c++;

    return count(number/10,c);
}

int main(){
    int num = 300205;

    int zero = count(num,0);
    cout<<"Number of zeroes "<<zero<<endl;

    return 0;
}