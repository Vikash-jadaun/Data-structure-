#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* creatLinkedList(int arr[], int index, int size){
    if(index==size){
        return NULL;
    }
    
    Node *temp=new Node(arr[index]);
    temp->next=creatLinkedList(arr,index+1,size);
    return temp;
}

void display(Node *head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//------delete using recursion---
Node* deleteNode(Node *curr, int x){
    if(x==1){
        Node *temp=curr->next;
        delete curr;
        return temp;
    }

    curr->next=deleteNode(curr->next, x-1);
    return curr;
}

int main(){

    Node *head;
    head=NULL;
    int arr[]={100,200,300,400,500};
    head=creatLinkedList(arr,0,5);
    cout<<"Before Deletion: ";
    display(head);

    head=deleteNode(head,4);
    cout<<"\nAfter deletion : ";
    display(head);
    

}
