#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1 , Node* next1, Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node * conArrLL(vector<int>arr){
    Node*head=new Node(arr[0]);
    Node*ptr=head;
    int len=arr.size(); 
    for(int i=1;i<len;i++){
        Node*temp=new Node(arr[i],nullptr,ptr);
        ptr->next=temp;
        ptr=temp;
    }
    return head;
}
void print(Node* head) {
    while (head != nullptr) {
        // Print the data in the tail Node
        cout << head->data << " ";  
         // Move to the next Node
        head = head->next;         
    }
}

Node * insertNodeAtIndex(Node * head,int index,int value){
    if(head==nullptr){
        return head;
    }
    if(index==1){
        Node * newnode=new Node(value,head,nullptr);
        head->prev=newnode;
        head=newnode;
        return head;
    }
    int count=0;
    Node * ptr=head;
    while (ptr->next!=nullptr)
    {
        count=count+1;
        if(count==index){
            Node* newnode=new Node(value,ptr,ptr->prev);
            ptr->prev->next=newnode;
            ptr->prev=newnode;
            return head;
        }
        ptr=ptr->next;
    }
    count=count+1;
    if(count=index){
        Node* newnode=new Node(value,nullptr,ptr);
        ptr->next=newnode;
    }
    

    return head;
}
int main(){
    vector<int>arr={3,6,9,12};
    Node * head=conArrLL(arr);
    Node* head1=insertNodeAtIndex(head,5,2);
    print(head1);
    return 0;
}
