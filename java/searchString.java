public class searchString {
    public static void main(String[] args) {
        String name = "abdul";
        char target = 'c';
        System.out.println(search(name, target));

    }

    static boolean search(String name, char target) {
        if (name.length() == target) {
            return false;

        }
        for (int i = 0; i < name.length(); i++) {
            if (target == name.charAt(i))
                return true;
        }
        return false;
    }

}
