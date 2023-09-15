import java.util.Scanner;
 class main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char ch = in.next().trim().charAt(0);
        if(ch>='a' && ch<='z')
        System.out.println("LowerCase");
        else if(ch>='A' && ch<='Z')
        System.out.println("UpperCase");
        else
        System.out.println("Invalid Input");
    }
    
}
