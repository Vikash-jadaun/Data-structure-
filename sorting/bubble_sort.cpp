#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){

    int arr[5]={4,2,6,20,10};
    bubbleSort(arr, 5);
    for(int i=0; i<5; i++){

        cout<<arr[i]<<" ";
    }

}