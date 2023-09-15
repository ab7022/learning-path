import java.util.Scanner;

public class Lab9 {
    String className;
    String classTeacherName;
    int studentCount;

    String studentName[] = new String[50];
    Scanner sc = new Scanner(System.in);

    public Lab9() {
        getInfo();
    }

    private void getInfo() {
        System.out.println("Please Enter the Class Name");
        className = sc.nextLine();

        System.out.println("Please Enter Class Teacher Name");
        classTeacherName = sc.nextLine();

        System.out.println("Please enter total number of students in the class");
        studentCount = Integer.parseInt(sc.nextLine());
        System.out.println("Please enter names of all" + " " + studentCount + " students in the class");

        for (int i = 0; i < studentCount; i++) {
            studentName[i] = sc.nextLine();
        }
    }

    public void display() {
        System.out.println("Class Name: " + className);
        System.out.println("Class Teacher Name:" + classTeacherName);

        System.out.println(" Student Names ");
        System.out.println("---------------");

        for (int i = 0; i < studentCount; i++) {
            System.out.print(studentName[i]);
        }
    }

    public static void main(String args[]) {
        Lab9 fy = new Lab9();
        fy.display();
    }
}