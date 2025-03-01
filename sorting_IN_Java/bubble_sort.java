import java.util.*;
public class bubble_sort{


    static void bubble_sort(int[] a){
        int n = a.length;

        // n-1 passes
        for(int i=0; i<n-1; i++){
            //last i elements are already sorted
            boolean swapped=false;
            for(int j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    swapped=true; //some swap happend
                }
                if(swapped==false){ //have any swapped happened in this pass? if not then array is already sorted 
                    return; //no swap in this pass
            }
        }
    }

    public static void main(String[] args){
        int[] a={2,5,6,8,1,3,4,7};
    
        bubble_sort(a);
        for(int i:a){
            System.out.print(i+" ");
        }
    }
}