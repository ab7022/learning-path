import java.util.Arrays;
import java.util.Scanner;
public class array {
public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
//    System.out.println("enter the number of elements you want to add");
//    int n= in.nextInt();
//     int[] arr= new int [10];
//     System.out.println("enter the elements");
//     for (int i=0;i<n;i++){
//         arr[i]= in.nextInt();
//     }
//     System.out.println("enter the index no you want to find");
//     int m = in.nextInt();
//     for (int i=0;i<n;i++){
//        System.out.println(arr[m]);
//     }
//     System.out.print(Arrays.toString(arr));








//////to find the greater num in array....   
//         int[] arr={11,22,33,44,55,66,77,88,99};
//         System.out.println(Arrays.toString(arr));

//         System.out.println("and the greater num is "+max(arr));

// }    
// static int max (int[] arr){
// int maxValue= arr[0];
// for(int i=0;i<arr.length;i++)
// {
//     if(arr[i]>maxValue)
//     maxValue=arr[i];

// }
// return maxValue;







//reverse the array
        int[] arr={11,22,33,44,55,66,77,88,99};
        System.out.println(Arrays.toString(arr));
       
        reverse(arr);
        System.out.println(Arrays.toString(arr));

}
static void reverse(int[] arr){
    int start = 0;
    int end = arr.length-1;
    while (start<end) {
        swap(arr,start,end);
        start++;
        end--;
    }
}

    
    static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}

