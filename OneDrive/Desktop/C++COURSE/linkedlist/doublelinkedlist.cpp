#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

//converting vector to double linked list
Node* convertArr2dll(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i], nullptr, prev); 
        prev->next = temp; //previous ka next pointer set kar rahe hai got it brother iska prev pointer to upar set hoga tha na pahle he
        prev = temp; //previous ko next move kiya
    }
    return head;
 }
 //print function that prints all elements of linked list
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

//deleting head

Node* deletehead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

//deleting tail of linkedlist
Node* deletetail(Node* head){
    if(head == NULL||head->next ==NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* newtail = tail->back;
    newtail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

//deleting kth elements
Node* removekthelement(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode!=NULL){
        cnt++;
        if(cnt == k)break;
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }
    prev->next = front;
    front->back = prev;
    kNode->next = nullptr;
    kNode->back = nullptr;

    delete kNode;

    return head;
}
//delete the node of the dll (node!=head) because then we need to return next element as head which we not doing we are only deleting element not returning head;

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    free(temp);
}
//insertion before head 
//................tail 
//................Kth
//................Node
Node* insertBeforeHead(Node* head, int val){
    Node* newHead = new Node(val, head, nullptr);
    head->back = newHead;

    return newHead;
}

//insertion before tail 
Node* insertBeforeTail(Node* head, int val){
    if(head->next==NULL){
        return insertBeforeHead(head, val);
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

// insert before kth element 
Node* insertBeforeKthelement(Node* head, int k ,int val){
    if(k==1){
        return insertBeforeHead(head, val);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k)break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;

}   

//insertbeforegivenNODE
void insertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val,node,prev);
    prev->next = newNode;
    node->back = newNode;
}

int main(){

    vector<int> fr = { 3,4,5,7 };
    Node* head = convertArr2dll( fr );
     print( head );
     cout<<"\n";
     insertBeforeNode(head,1000000);
    //  head = insertBeforeKthelement(head, 2,10000);
    //  head = insertBeforeTail(head, 100);
    //  head = insertBeforeHead(head,100);
    //  deleteNode(head->next->next->next);
    // head = removekthelement(head, 4);
    // head = deletehead( head );
    // head = deletetail(head);
    print( head );

}

//doubly linked list is used in web browser 