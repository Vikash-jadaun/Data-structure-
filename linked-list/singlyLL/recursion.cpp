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

Node* createLinkedList(int arr[], int index, int size){
    //base case
    if(index==size){
        return NULL;
    }

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}
int main(){
    Node *head;
    head=NULL;
    int arr[5]={100,200,300,400,500};
    head= createLinkedList(arr,0,5);        //it gives address to the head

    //print 
    Node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}