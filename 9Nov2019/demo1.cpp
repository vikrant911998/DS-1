#include<iostream>
using namespace std;

//Stack->LIFO

class Stack{
    int capacity;
    int top;
    int *arr;

    public:
        Stack(int capacity){
            this->capacity = capacity;
            this->top = -1;
            this->arr = new int[capacity];
        }
        int peek(){
            if(top == -1){
                cout<<"Stack UnderFlow"<<endl;
                return 0;
            }
            return arr[top];
        }

        int pop(){
            if(top == -1){
                cout<<"Stack UnderFlow"<<endl;
                return 0;
            }
            return arr[top--];

        }
        
        bool isEmpty(){
            return (top<0);
        }

        void push(int number){
            if(top>capacity-1){
                cout<<"Stack OverFlow"<<endl;
                return;
            }
            arr[top+1] = number;
            ++top;
        }

        void display(){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" "<<endl;
            }
        }
};  


int main(){
    Stack s1(10);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    cout<<"*******"<<endl;
    // // cout<<s1.pop()<<endl;
    // cout<<"*******"<<endl;
    // s1.display();
    cout<<s1.peek()<<endl;
    cout<<"*******"<<endl;
    s1.display();
    if(s1.isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

    return 0;
}