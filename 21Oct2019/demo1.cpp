#include <iostream>
using namespace std;


string reverse(string s){
	if(s.length() == 1)
		return s.substr(0);

	return reverse(s.substr(1))+s.at(0);
}

int main(){
	string s = "vikrant";
	string r = reverse(s);

	cout<<r<<endl;

	return 0;
}



