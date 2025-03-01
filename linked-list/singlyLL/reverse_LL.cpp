#include<iostream>
#include<vector>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int data){
        val=data;
        next=NULL;
    }
};

void display(ListNode *head){
    ListNode *temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){

    ListNode *head=NULL;

    int arr[5]={2,4,6,7,8};
    for(int i=0; i<5; i++){
        //LL does not exist
        if(head==NULL){
            head=new ListNode(arr[i]);
    }
    //LL exist
    else{
        ListNode *temp;
        temp=new ListNode(arr[i]);
        temp->next=head;
        head=temp;
    }
    }
    cout<<"Orginal: ";
    display(head);
    cout<<endl;

//--------Reverse Linked list---------

vector<int>ans;
ListNode *temp=head;
while(temp!=NULL){
    ans.push_back(temp->val);
    temp=temp->next;
}
int i=ans.size()-1;
temp=head;

while(temp){
    temp->val=ans[i];
    i--;
    temp=temp->next;
}
cout<<"Reverse: ";
display(head);

}