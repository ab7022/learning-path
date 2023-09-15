import java.util.Arrays;
import java.util.Scanner;
public class swaparray {
    public static void main(String[] args) {
        int[] arr = {11,22,33,44,55};
        System.out.println(Arrays.toString(arr));
        swap(arr,0,4);
        System.out.println(Arrays.toString(arr));
    }
    static void swap(int[] arr,int index1,int index2){
        int temp = arr[index1];
        arr[index1]=arr[index2];
        arr[index2]=temp;
    }
}
