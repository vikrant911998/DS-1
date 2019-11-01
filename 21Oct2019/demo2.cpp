#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
Node *reverseLL(Node *);


int main(){
    Node *head = createList();
    display(head);
    

    return 0;
}

void display(Node * head){
    Node * temp = head;
    
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

Node * createList(){
    Node *head;
    Node *temp;

    int value;
    cout<<"Enter the elements of the linked list"<<endl;
    cin>>value;
    Node *newNode;

    while(value != -1){
        newNode = (Node*)malloc(sizeof(Node));
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
    newNode->next = head;
    return head;
}