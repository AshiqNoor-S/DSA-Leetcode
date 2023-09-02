#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

};

void print(Node* node){
    Node *temp = node;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
};

void InsertAtHead(Node* &head,int data){
    Node* nextnode = new Node(data);
    nextnode->next = head;
    head = nextnode;
}

void InsertAtTail(Node* &tail,int data){
    Node* nextnode = new Node(data);
    tail->next = nextnode;
    tail = nextnode;
}

int main(){
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,6);
    InsertAtHead(head,99);
    InsertAtTail(tail,7);
    InsertAtTail(tail,10);
    print(head);
    
}