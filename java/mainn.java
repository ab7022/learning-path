import java.util.Scanner;

class mainn {
    public static void main(String[] args) {
        System.out.println("ENTER A ALPHABET");
        Scanner in = new Scanner(System.in);
        char ch = in.next().trim().charAt(0);
        if (ch >= 'a' && ch <= 'z')
            System.out.println("LowerCase");
        else if (ch >= 'A' && ch <= 'Z')
            System.out.println("UpperCase");
        else
            System.out.println("Invalid Input");
    }
    {
        int a = 30;
        System.out.println(a);
    }


}
