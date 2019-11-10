#include<iostream>
using namespace std;
// "{a+b+[c+(d-e)]+[a]}"->
typedef struct Stack{
    int data;
    struct Stack *next;
}Stack;

Stack *top = NULL;

void push(int data){
    Stack *temp = new Stack();

    if(!temp){
        cout<<"Stack OverFlow"<<endl;
        return;
    }

    temp->data = data;
    temp->next = top;
    top  = temp;
}

void pop(){
    Stack * temp;
    if(top == NULL){
        cout<<"Stack UnderFlow"<<endl;
        return ;
    }
    temp = top;

    top = top->next;
    temp->next = NULL;

    free(temp);
}




int main(){


    return 0;
}