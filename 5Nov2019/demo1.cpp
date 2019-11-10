#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
int display(Node *);



int main(){
    Node *head = createList();
    int result = display(head);
    cout<<result<<endl;

    return 0;
}

int display(Node * head){
    Node * temp = head;
   int count = 0; 
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    return count;
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
        newNode->next = NULL;
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