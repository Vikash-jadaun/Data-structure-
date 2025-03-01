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

//-------create linkd list using recursion---------
Node *createDDll(int arr[],int index, int size, Node *back){
    if(index==size) return NULL;
    Node *temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=createDDll(arr,index+1,size,temp);
    return temp;
}

//-----display function---------
void display(Node *head){
    Node *trev=head;
    while(trev){
        cout<<trev->data<<" ";
        trev=trev->next;
    }
}


int main(){

    int arr[5]={1,2,3,4,5};
    Node *head=NULL;
   head=createDDll(arr,0,5,head);
    display(head);

//----------------insert node at any given positon

    
    int pos=5;
//CASE 1:- insert at start
    //ll is not exist
    if(pos==0){
    if(head==NULL){
        head=new Node(10);
    }
    //ll is exist
    else{
        Node *temp=new Node(10);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

    else{
//CASE 2:- insert at end
    Node *curr=head;
    while(--pos){
        curr=curr->next;
    };
    if(curr->next==NULL){
    Node *temp=new Node(10);
       temp->prev=curr;
       curr->next=temp;
    }

//CASE 3:- insert between 2 nodes 
   else{
    Node *temp=new Node(10);
    temp->next=curr->next;
    temp->prev=curr;
    curr->next=temp;
    temp->next->prev=temp;
    // cout<<"\nAfter insert Node at position"<<endl;
   }
}
    cout<<endl;
    display(head);

}