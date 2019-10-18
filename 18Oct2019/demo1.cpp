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
    cout<<endl;
    Node *newHead = reverseLL(head);
    display(newHead);

    return 0;
}

Node* reverseLL(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while(curr != NULL){

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
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