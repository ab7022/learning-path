import java.awt.*;

class Lab15 {
    Lab15() {
        Frame f = new Frame("Menu and MenuItem Example");
        MenuBar mb = new MenuBar();
        Menu menu = new Menu("BCA II SEM SUBJECTS");
        Menu submenu = new Menu("Java");
        MenuItem i1 = new MenuItem("NSM");
        MenuItem i2 = new MenuItem("CA");
        MenuItem i3 = new MenuItem("DS");
        MenuItem i4 = new MenuItem("JAVA THEORY");
        MenuItem i5 = new MenuItem("JAVA LAB");
        f.setMenuBar(mb);
        mb.add(menu);
        menu.add(i1);
        menu.add(i2);
        menu.add(i3);
        menu.add(submenu);
        submenu.add(i4);
        submenu.add(i5);
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
    }

    public static void main(String args[]) {
        new Lab15();
    }
}