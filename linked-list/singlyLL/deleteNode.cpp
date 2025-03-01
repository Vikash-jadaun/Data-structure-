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

int main(){

    Node *head;
    head=NULL;
    int arr[]={100,200,300,400,500};
    head=creatLinkedList(arr,0,5);
    cout<<"Before Deletion: ";
    display(head);

//--------------delete a node at start-----------
   /* if(head!=NULL){
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    cout<<"\nafter deletion : ";
    display(head); */

//-------------delete a node from end-------------
    /* if(head!=NULL){
        if(head->next==NULL){
            Node *temp=head;
            head=NULL;
            delete temp;
        }

        else{
            Node *curr=head;
            Node *prev=NULL;
            while(curr->next!=NULL){
               prev =curr;
               curr=curr->next; 
            }
            delete curr;
            prev->next=NULL;
        }
    }
    cout<<"\nAfter deletion : ";
    display(head); */

//-------------delete node from particular position-------------
    int x=5;
    if(head!=NULL){
        if(x==1){
            Node *temp=head;
            head=head->next;
            delete temp;
        }
        else{
            Node *curr=head;
            Node *prev=NULL;
            x--;
            while(x--){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }
    }
    cout<<"\nAfter deletion : ";
    display(head);
    

}