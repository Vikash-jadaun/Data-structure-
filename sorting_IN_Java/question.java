/*
Give an array of names of the fruits; you are supposed to sort it in lexicographical order using the selection sort

Input: ["papaya", "lime", "watermelon", "apple", "mango", "kiwi"]
Output: ["apple", "kiwi", "lime", "mango", "papaya", "watermelon"]
 */

import java.util.*;
public class question {
    static void selection(String[] arr){
        int n = arr.length;
        for(int i=0; i<n-1; i++){
            int min_index=i;
            for(int j=i+1; j<n; j++){
                if(arr[j].compareTo(arr[min_index])<0){
                    min_index=j;
                }
            }
            String temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
    public static void main(String[] args) {
        String[] arr = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
        selection(arr);
        for(String i:arr){
            System.out.print(i+" ");
        }
    }
}
