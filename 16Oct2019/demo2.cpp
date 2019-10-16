#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
Node * deleteNode(Node *, int);

int main(){
    Node *head = createList();
    display(head);
    Node *newHead = deleteNode(head,3);
    cout<<"After deletion"<<endl;
    display(newHead);
    return 0;
}

Node * deleteNode(Node *head,int index){
    if(index ==0){
        head = head->next;
        return head;
    }
    else{
        int count=0;
        Node *temp = head;
        while(count<index-1){
            count++;
            temp= temp->next;
        }
        temp->next = temp->next->next;
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