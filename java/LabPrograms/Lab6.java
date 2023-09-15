class Addsub {
    static int a = 20, b = 20;

    public void display() {
        System.out.println("number 1:" + a);
        System.out.println("number 2:" + b);
    }

    void add() {
        System.out.println("sum:" + (a + b));
    }

    void sub() {
        System.out.println("sub:" + (a - b));
    }
}
class Muldiv extends Addsub {
    void mul() {
        System.out.println("mul: " + (a * b));
    }
    void div() {
        System.out.println("div: " + (a / b));
    }
}

class Lab6 extends Muldiv {
    public static void main(String[] args) {
        Muldiv obj = new Muldiv();
        obj.display();
        obj.add();
        obj.sub();
        obj.mul();
        obj.div();
    }
}
