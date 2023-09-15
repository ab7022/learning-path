import java.util.Scanner;
class calculator{
    public static void main(String[] args) {
        System.out.println("please enter operator");
        Scanner in = new Scanner(System.in);
        char op= in.next().trim().charAt(0);
        System.out.println("please enter two numbers");
        int num1 = in.nextInt();
        int num2 = in.nextInt();
        int ans=0;
        if (op == '+'||op == '-'||op == '*'||op == '/') {
            if (op=='+') {
              ans=num1+num2;  
            }
            else if (op=='-') {
                ans=num1-num2;  
              }
              else if (op=='*') {
                ans=num1*num2;  
              }
              else if (op=='/') {
                ans=num1/num2;  
              }
              System.out.println("your Ans is "+ ans);
        }
        else
        System.out.println("Invalid input");
    }
}