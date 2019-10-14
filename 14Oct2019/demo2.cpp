#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Student{
    int rollno;
    string name;
}Student;

 Student s2;

int main(){
    Student s1;

    cout<<"Enter the name "<<endl;
    cin>>s1.name;
    cout<<"Enter the rollno"<<endl;
    cin>>s1.rollno;
    
    cout<<"Name :"<<s1.name<<endl;
    cout<<"Rollno : "<<s1.rollno<<endl;


    return 0;
}