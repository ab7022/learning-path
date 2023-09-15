package BCA;

import java.util.Scanner;

public class Student {
    private String name;
    private int age;
    private String sex;

    public void accept() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter name: ");
        name = in.nextLine();
        System.out.println("Enter Gender: ");
        sex = in.nextLine();
        System.out.println("Enter age of student: ");
        age = in.nextInt();
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Sex: " + sex);
    }
}
