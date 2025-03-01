import java.util.*;

public class selection_sort{

    static void selection(int[] arr){
        int n = arr.length;
        // int min=integer.MIN_VALUE;
        for(int i=0; i<n-1; i++){
            int min_index=i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[min_index]){
                    min_index=j; 
                }
            }
        //swap current element with min element ->current element is sorted now 
        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
        }
    }

    public static void main(String[] args){
        int[] arr={2,5,6,8,1,3,4,7};
        selection(arr);
        for(int i:arr){
            System.out.print(i+" ");
        }
    }
}