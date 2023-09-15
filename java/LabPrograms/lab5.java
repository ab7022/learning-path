public class lab5 {
    public void sum(int a, int b) {
        System.out.println("result is:" + (a + b));
    }

    public void sum(float a, float b) {
        System.out.println("result is:" + (a + b));
    }

    public static void main(String[] args) {
        lab5 cal = new lab5();
        cal.sum(1, 2);
        cal.sum(4.6f, 5.0f);
    }
}
