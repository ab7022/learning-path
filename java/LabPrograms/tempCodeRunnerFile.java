public class lab7 {
    public static int a, b;

    void display() {
        System.out.println("A:" + a);
        System.out.println("B:" + b);
    }

    public static void main(String[] args) {
        lab7 varr1 = new lab7();
        varr1.a = 10;
        varr1.b = 20;
        varr1.display();
        lab7 varr2 = new lab7();
        varr2.a = 20;
        varr2.b = 10;
        varr2.display();
        lab7 varr3 = new lab7();
        varr3.display();
    }
}
