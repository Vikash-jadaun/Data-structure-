public class radix_sort {
       
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
static void basicCountSort(int[] arr, int place ){
    int max=FindMax(arr);
    
    int[] count= new int[10];
    for(int i=0; i<arr.length; i++){
        count[(arr[i]/place)%10]++;
    }  

    int k=0;
    for(int i=0; i<count.length; i++){
        for(int j=0; j<count[i]; j++){
            arr[k++]=i;
        }
    }
}

//------------Radix Sort-------------------
static void radixSort(int[] arr){
    int max=FindMax(arr);
    //now apply counting sort to sort element based on place value
    for(int place=1; max/place >0; place*=10){
        count_sort(arr,place)
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
