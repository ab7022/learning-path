class A {
    protected int a; 
    void show1()
    {
    System.out.println("value of a is " +a); 
    }
    }
    class B extends A{ 
    void show2() 
    {
    System.out.println("a="+a);
    } 
    }
    class D //it can't access protected members
    {
    void show3()
    {
    System.out.println("value of a is " +a);
    }
    }
    class C {
        public static void main(String [] args) {
        A a1 = new A(); 
        B b1 = new B(); 
        D d1 = new D();
        a1.a=10;
        b1.a=20; 
        d1.a=30;
        a1.show1(); 
        b1.show2();
        d1.show3(); 
        } 
    }
            