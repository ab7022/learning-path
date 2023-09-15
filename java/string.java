import java.util.Scanner;
public class string {
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Please enter your name");
    String name= in.next();
    String msg= greeting(name);
    System.out.println(msg);

    }
    static String greeting(String name){
        String message ="hello" + name;
        return message;
    }
    
}
