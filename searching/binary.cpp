#include<iostream>
using namespace std;

int binarySearch(int arr[],int target, int start, int end){
    while(start<=end){
        int mid=start +(end-start)/2;
        if(arr[mid]==target) {
            return mid;
        }
        if (arr[mid]<target)
            start=mid+1;
        
        else
            end=mid-1;
    }
    return -1;
}

int main(){
    int arr[5]={2,5,7,109,8};
    int ans=binarySearch(arr,109,0,4);
    cout<<ans;
}