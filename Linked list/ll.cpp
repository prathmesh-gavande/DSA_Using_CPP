#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printll(Node *head){  // pass by value pointer
    Node *ptr=head;
    while (ptr!=nullptr)
    {
        cout<<ptr ->data<<"->"<<ends;
        ptr=ptr->next;
    }
    

}

void insertionAtHead(Node* &head,int value){  //pass by reference pointer of head 
    //for empty linkedlist
    Node *newNode=new Node(value);
    if (head==NULL){
        head=newNode;
    }
    else{
    //for non-empty linkedlist    
        Node *ptr=head;
        newNode->next=head;
        head=newNode;
    }

}
int main(){

    Node* head=nullptr;
    // Node *first=new Node(3);
    // Node *second=new Node(9);
    // Node *third=new Node(6);
    // Node *fourth=new Node (12);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;

    // Node *head =first;
    insertionAtHead(head,8);
    cout<<"Elements in linked list: "<<endl;
    printll(head);


    return 0;
}


