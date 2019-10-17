#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
Node * moveNode(Node *,int);


int main(){
    Node *head = createList();
    display(head);
    Node *newHead = moveNode(head,3);
    display(newHead);
    
    return 0;
}

Node * moveNode(Node *head,int value){
    Node *temp1 = head;
    Node *temp2 = head;
    int i = -value;

    while(temp1 != NULL){
        if(i>=0){
            temp2 = temp2->next;
        }

        temp1 = temp1->next;
        i++;
    }
    temp1->next = head;
    head = temp2->next;
    temp2->next = NULL;

    return head;

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