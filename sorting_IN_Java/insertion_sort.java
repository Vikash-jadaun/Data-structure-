public class insertion_sort {

    static void insertion(int[] arr){
        int n = arr.length;
        for(int i=1; i<n; i++){
            for(int j=i; j>0; j--){
                if(arr[j]<arr[j-1]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
                else break;
            }
        }
    }
    public static void main(String[] args){
        int[] a={2,5,6,8,1,3,4,7};
        insertion(a);
        for(int i:a){
            System.out.print(i+" ");
        }
    }
}
