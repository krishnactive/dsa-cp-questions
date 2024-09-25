#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAttail(Node* tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void InsertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void Print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    //created a new node
    Node* node1 = new Node(11);

    Node* tail = node1;
    // cout<< node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    Print(head);
    InsertAttail(tail, 12);
    Print(head);
    InsertAttail(tail, 13);
    Print(head);

}