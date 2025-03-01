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
    cout<<"Before deletion: ";
    display(head);

// //---------deletion at start-----------
//     if(head!=NULL){
//         if(head->next==NULL){
//             delete head;
//             head=NULL;
//         }
//         else{
//         Node *temp=head;
//         head=head->next;
//         delete temp;
//         }

//     }
//     cout<<"\nAfter deletion at start: ";
//     display(head);


// //--------deletion at end--------------
//     if(head!=NULL){
//         if(head->next==NULL){
//             delete head;
//             head=NULL;
//         }
//         else{
//             Node *curr=head;
//             while(curr->next){
//                 curr=curr->next;
//             }
//             curr->prev->next=NULL;    //last second node=NULL
//             delete curr;
//         }
//     }
//     cout<<"\nAfter deletion at end: ";
//     display(head);


//----------deletion at any position-----------
    int pos=2;
    if(pos==1){
    //case 1: at start
    if(head!=NULL){
        if(head->next==NULL){
            delete head;
             head=NULL;
        }
        else{
            Node *temp=head;
            head=head->next;
            delete temp;
        }
    }
    }

    else{
    Node *curr=head;
    while(--pos){
        curr=curr->next;
    }
    //last node
    if(curr->next==NULL){
        curr->prev->next=NULL;
        delete curr;
    }
    else{
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        delete curr;
    }
    }
    cout<<endl;
    display(head);
}