#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;
};

class Queue{
    Node *start;
    Node *end;

    public:
        Queue(){
            Node *temp = new Node();
            start = temp;
            end  = temp;
        }

};



int main(){
    

    return 0;
}