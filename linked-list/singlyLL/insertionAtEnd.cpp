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

int main(){
    Node *head,*tail;
    tail=head=NULL;

    int arr[]={2,4,6,7,8,9};
    
    //insert at end

    for(int i=0; i<6; i++){
    //linked list empty
    if(head==NULL){
        head=new Node(arr[i]);
        tail=head;
    }
    //linked list is not empty
    else{
        tail->next=new Node(arr[i]);
        tail=tail->next;
    }
    }

//PRINT 
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}

}