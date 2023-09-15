import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ArrayyList {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>(10);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(26);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // list.add(23);
        // // System.out.println(list.contains(26));
        // System.out.println(list);
        // list.set(0, 100);
        // System.out.println(list);

        System.out.println("enter array elemets");
        for (int i = 0; i < 5; i++) {
            list.add(in.nextInt());
        }

        for (int i = 0; i < 5; i++) {
            System.out.print(list.get(i));
        }
    }

}
