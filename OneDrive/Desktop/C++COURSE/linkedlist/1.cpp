#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){//constructor are just a special type of member function which is used to initialize the object of the class 

        data = data1;
        next = next1;
    }
     Node(int data1){//constructor are just a special type of member function which is used to initialize the object of the class 
      
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> arr = {12, 5, 8,7};
    // Node* y = new Node(arr[0]);
    // cout<<y->data;
    //pointer to this memory
    Node* head = convertArr2LL(arr);
    // cout<<head->data;
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}