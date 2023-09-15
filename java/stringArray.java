import java.util.Arrays;
import java.util.Scanner;

public class stringArray {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        string[] str = new string[5];
        for (int i = 0; i < str.length; i++) {
            str[i] = in.next();

        }
        System.out.println(Arrays.toString(str));
    }
}
