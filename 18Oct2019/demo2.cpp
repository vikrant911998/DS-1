#include<iostream>
using namespace std;
//function declaration


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createList();
void display(Node *);
int midpoint(Node *);


int main(){
    Node *head = createList();
    display(head);
    cout<<endl;
    cout<<"MIDPOINT : "<<midpoint(head)<<endl;

    return 0;
}

int midpoint(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;

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