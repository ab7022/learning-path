import java.util.Scanner;

public class dinmensionalArray {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] arr = new int[3][3];
        System.out.println(arr.length);
        for (int r = 0; r < arr.length; r++) {
            for (int j = 0; j < arr[r].length; j++) {
                arr[r][j] = in.nextInt();
            }
        }

        for (int r = 0; r < arr.length; r++) {
            for (int j = 0; j < arr[r].length; j++) {
                System.out.print(arr[r][j] + " ");
            }
            System.out.println();
        }

    }
}
