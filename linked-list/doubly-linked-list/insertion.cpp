#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void display(Node *head){
    Node *trev=head;
    while(trev){
        cout<<trev->data<<" ";
        trev=trev->next;
    }
}

int main(){

    Node *head=NULL;

//----------------insert at start
    //LL is doesn't exist
    if(head==NULL){
        head=new Node(5);
    }
    //LL is exist
    else{
        Node *temp=new Node(6);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

    display(head);
}