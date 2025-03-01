public class count_sort {
    
//------------Find max element--------------
    static int FindMax(int[] arr){
        int max=Integer.MIN_VALUE;
        for(int i=0; i<arr.length; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }


//----------count sort algo-----------------
    static void basicCountSort(int[] arr){
        int max=FindMax(arr);
        
        int[] count= new int[max+1];
        for(int i=0; i<arr.length; i++){
            count[arr[i]]++;
        }  

        int k=0;
        for(int i=0; i<count.length; i++){
            for(int j=0; j<count[i]; j++){
                arr[k++]=i;
            }
        }
    }

//------------Display function-------------
    static void display(int[] arr){
        for(int i:arr){
            System.out.print(i+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr={2,5,7,2,5,7,0,1,4,2,5,4};
        System.out.print("Before: ");
        display(arr);
        System.out.print("After : ");
        basicCountSort(arr);
        display(arr);
    }
}
