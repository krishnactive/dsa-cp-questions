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
//print
void print(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

//(size)
int sz(Node* head){
    int n = 0;
    while (head!=NULL)
    {
        n++;
        head = head->next;
    }
    return n;
}


//delete and insertion in linked list 

Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if(head==nullptr||head->next==nullptr)return nullptr;
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    // free(temp->next);
    delete temp->next;
    temp->next = nullptr;
    return head;

}

Node* valuedel(Node* head, int val){
    if(head==nullptr){
        return nullptr;
    }
    if(head->data==val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;        
    }
    Node* temp = head;
    Node* pre = NULL;
    while(temp!=nullptr){
        if(temp->data==val){
            pre->next = pre->next->next;
            delete temp;
            break;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;
}

//delete kth element
Node* kth(Node* head, int k){
    // int n = sz(head);
    if(head==nullptr){
        return nullptr;
    }
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    } 
    int n = 0;
    Node* temp = head ;
    Node* pre = NULL;
    while(temp!=nullptr){
        n++;
        if(n==k){
            pre->next = pre->next->next;
            delete temp;
            break;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {12, 5, 8,7};
    // Node* y = new Node(arr[0]);
    // cout<<y->data;
    //pointer to this memory
    Node* head = convertArr2LL(arr);
    head = valuedel(head,13);
    // head = kth(head,1);
    // head = removeHead(head);
    // head = deletetail(head);
    print(head);
    // cout<<head->data;
    // Node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
}