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

    int count=0;
    Node *temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    cout<<endl<<count;

}
