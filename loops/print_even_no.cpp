#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    for(int i=2; i<=num; i+=2){
        cout<<" "<< i; 
    }
}