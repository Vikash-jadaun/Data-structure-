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
    //static
    Node A1(4);
    cout<<A1.data<<endl;

    //dynamically
    Node *head;
    head=new Node(5);
    cout<<head->data<<endl;
    cout<<head->next<<endl;

   
}