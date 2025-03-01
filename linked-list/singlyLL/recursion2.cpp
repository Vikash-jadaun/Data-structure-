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

Node *createNode(int arr[], int index, int size, Node *prev){
    //base case
    if(index==size)
    return prev;
    Node *temp=new Node(arr[index]);
    temp->next=prev;
    return createNode(arr, index+1, size, temp);
}

int main(){
    Node *head;
    head=NULL;
    int arr[5]={100,200,300,400,500};
    head=createNode(arr,0,5,head);

    //insert value at particular position
    int x=3;
    int value=30;
    Node *temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    // Node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}