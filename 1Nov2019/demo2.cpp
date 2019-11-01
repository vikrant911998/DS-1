#include<iostream>
using namespace std;

// int checkPalindrome(string s,int start,int end){
//     if(start > end)
//         return 1;

//     if(s[start] == s[end]){
//         cout<<"Equal "<<s.substr(start+1,end-1)<<endl;
//         return checkPalindrome(s.substr(start+1,end-1),start+1,end-1);
//     }
//     else{
//         return 0;
//     }

// }

bool checkPalindrome(string s,int start,int end){
    if(start == end)
        return true;

    if(s[start] != s[end])
        return false;

    if(start<end+1){
        return checkPalindrome(s,start+1,end-1);
    }
    return true;
}

int main(){
    string s = "112211";
    
    bool result = checkPalindrome(s,0,s.length()-1);
    if(result){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}