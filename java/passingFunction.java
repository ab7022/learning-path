import java.util.Arrays;
import java.util.Scanner;
public class passingFunction {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] nums = {22,33,44,55,66,77,88,99};
        System.out.println(Arrays.toString(nums));
        change(nums);
        System.out.println(Arrays.toString(nums));
        
    }
    static void change(int[] arr){
        arr[0] = 33;
    }
    

}
