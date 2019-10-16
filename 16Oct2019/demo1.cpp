#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
Node *insertNode(Node *,int,int); 

int main(){
    Node *head = createList();
    display(head);
    Node *newHead = insertNode(head,9999,4);
    cout<<"After insertion"<<endl;
    display(newHead);
    return 0;
}

Node * insertNode(Node *head, int element, int index){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    Node *temp = head;
    Node *temp1 = NULL;
    int count = 0;

    if(index == 0){
        head = newNode;
        newNode->next = temp;
        return head;
    }
    else{
        while(count<index-1){
            count++;
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = newNode;
        newNode->next = temp1;

        return head;
    }
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