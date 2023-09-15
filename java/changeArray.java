import java.util.Arrays;

public class changeArray {
    public static void main(String[] args) {
        int[] arr={10,5,7,8,9};
        System.out.println(Arrays.toString(arr));
        change(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void change(int[] ch){
    ch[0]=55;
    }
}
