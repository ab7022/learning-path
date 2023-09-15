public class lab3 {
    public static void main(String[] args) {
        int num1 = 20, num2 = 0, result = 0;
        try {
            result = num1 / num2;
            System.out.println("the result is:" + result);
        } catch (ArithmeticException e) {
            System.out.println("cannot be devided by zero " + e);
        }
    }
}
