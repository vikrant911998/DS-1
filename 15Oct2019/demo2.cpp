#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
int findValue(Node *,int);

int main(){
    Node *head = createList();
    int index;
    cout<<"Enter the index "<<endl;
    cin>>index;

    cout<<"Value : "<<findValue(head,index)<<endl;

    return 0;
}

int findValue(Node *head, int index){
    int count=0;

    while(head != NULL){
        if(count ==  index){
            return head->data;
        }
        count++;
        head = head->next;
    }

    return -1;
}



Node * createList(){
    Node *head;
    Node *temp;

    int value;
    cout<<"Enter the elements of the linked list"<<endl;
    cin>>value;

    while(value != -1){
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        cin>>value;
    }
    return head;
}