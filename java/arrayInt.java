import java.util.Arrays;

public class arrayInt {
    public static void main(String[] args) {
        fun(920,304,5,2,998,77,6,53,33,90);

    }
    static  void fun(int...v)
    {
    System.out.println(Arrays.toString(v));
    }
}
