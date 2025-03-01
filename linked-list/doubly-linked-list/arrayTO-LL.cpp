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

    int arr[5]={1,2,3,4,5};
    Node *head, *tail;
    tail=head=NULL;

//-------convert array into linked list----------
    for(int i=0; i<5; i++){
        //if linked list does not exist
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }

        // LL is exist
        else{
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }

    display(head);

}