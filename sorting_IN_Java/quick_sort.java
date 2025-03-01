public class quick_sort {

    //________display Algo______________
    static void display(int[] arr){
        for(int i: arr){
            System.out.print(i+" ");
        }
    }

    //_________Swap Algo________________
    static void swap(int[] arr, int i, int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    //__________partition Algo__________
    static int partition(int[] arr, int start, int end){
        int pivot=arr[start];
        int elmTHpivot=0;      //elementLessThanPivot\
        //no. of element less and equal to pivot
        for(int i=start+1; i<=end; i++){
            if(arr[i]<=pivot)
            elmTHpivot++;
        }
        int pivotIdx=start+elmTHpivot;
        swap(arr, start, pivotIdx);

        int i=start;
        int j=end;
        while(i<pivotIdx && j>pivotIdx){
            while(arr[i]<=pivot)
            i++;
            while(arr[j]>pivot)
            j--;
            if(i<pivotIdx && j>pivotIdx){
                swap(arr, i, j);
                i++;
                j--;
            }
        }
        return pivotIdx;
    }


    //_________sort Algo_________________
    static void quickSort(int[] arr, int start, int end){
        if(start>=end) return;
        int pi=partition(arr, start, end);
        quickSort(arr, start, pi-1);
        quickSort(arr, pi+1, end);
    }
    public static void main(String[] args) {
        
        int[] arr={2,5,7,1,9,4,10,12,6};
        int  n=arr.length;
        System.out.print("Before sorting: ");
        display(arr);
        System.out.print("\nAfter sorting: ");
        quickSort(arr, 0, n-1);
        display(arr);


    }
}
