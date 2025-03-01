#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
           
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }

}

int main(){

    int arr[5]={10,4,6,1,3};
    selectionSort(arr,5);
    for(int i=0; i<5; i++){

        cout<<arr[i]<<" ";
    }

}