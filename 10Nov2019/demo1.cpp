#include<iostream>
using namespace std;

//FIFO

class Queue{
    int capacity;
    int start;
    int end;
    int *arr;
    public: 
        Queue(int capacity){
            this->capacity = capacity;
            this->start = -1;
            this->end = -1;
            this->arr = new int[capacity];
        }

        void enqueue(int data){
            if(this->end == capacity-1){
                cout<<"Queue is Full"<<endl;
                return ;
            }
            if(start == -1)
            {
                this->start++;
                this->end++;
            }
            else{
                this->end++;
            }
            this->arr[this->end] = data;
        }
        int dequeue(){
            if(this->start == this->end)
                {
                    cout<<"Queue is Empty"<<endl;
                    return 0;
                }
            int temp = this->arr[this->start];
            this->start++;
            return temp;
        }


        bool isEmpty(){
            return (start==-1);
        }
        
        void display(){
            
            for(int i=start;i<=end;i++){
                cout<<this->arr[i]<<endl;
            }
        }
};


int main(){
    Queue obj(10);
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);

    cout<<"Queue is "<<endl;
    obj.display();
    cout<<"Dequeued element is "<<obj.dequeue()<<endl;
    cout<<"Queue is "<<endl;
    obj.display();   

    return 0;
}