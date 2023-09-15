import java.util.*;

class employee {
    String name;
    Date appdate;

    public employee(String nm, Date apdt) {
        name = nm;
        appdate = apdt;
    }

    public void display() {
        System.out.println("Name:" + name + " Appointment Date: " + appdate.getDate() + "/" + appdate.getMonth() + "/"
                + appdate.getYear());
    }
}

class Lab11 {
    public static void main(String[] args) {
        employee emp[] = new employee[5];
        emp[0] = new employee("sneha", new Date(1999, 05, 22));
        emp[1] = new employee("patil", new Date(1994, 05, 22));
        emp[2] = new employee("tabish", new Date(1996, 05, 22));
        emp[3] = new employee("muqeeb", new Date(1998, 05, 22));
        emp[4] = new employee("abdul", new Date(1990, 05, 22));
        System.out.println("List Of Employees");
        for (int i = 0; i < emp.length; i++)
            emp[i].display();
        for (int i = 0; i < emp.length; i++) {
            for (int j = 0; j < emp.length; j++) {
                if (emp[i].appdate.before(emp[j].appdate)) {
                    employee temp = emp[i];
                    emp[i] = emp[j];
                    emp[j] = temp;
                }
            }
        }
        System.out.println(" ");
        System.out.println("List Of Employees Seniority Wise");
        System.out.println("--------------------------------");
        for (int i = 0; i < emp.length; i++)
            emp[i].display();
    }
}