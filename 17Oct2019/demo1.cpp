#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
void printReverse(Node *);


int main(){
    Node *head = createList();
    // display(head);
    printReverse(head);
    return 0;
}

void printReverse(Node *head){
    if(head == NULL)
        return;
    printReverse(head->next);
    cout<<head->data<<endl;
}



void display(Node * head){

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
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