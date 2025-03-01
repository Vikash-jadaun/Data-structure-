#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n;i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

int main(){

    int arr[5]={3,1,7,9,8};
    insertionSort(arr,5);
    for(int i=0; i<5; i++){

        cout<<arr[i]<<" ";
    }
}