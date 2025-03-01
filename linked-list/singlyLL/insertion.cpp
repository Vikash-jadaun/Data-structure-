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
Node *head;
head=NULL;
// head=new Node(2);

//insertion at beginning
int arr[5]={2,4,6,7,8};
    for(int i=0; i<5; i++){
        //LL does not exist
        if(head==NULL){
            head=new Node(arr[i]);
    }
    //LL exist
    else{
     Node *temp;
        temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
    }
//insertion at end
// int arr2[3]={100,200,300};
// for(int i=0; i<3; i++){
//     if(head==NULL){
//         Node *newNode=new Node(arr2[i]);
//     }
//     else{
//     Node *tail=head;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     Node *newNode=new Node(arr2[i]);
//     tail->next=newNode;
//     }
// }
//PRINT 
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}

}