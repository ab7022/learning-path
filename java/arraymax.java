public class arraymax {
    
    public static void main(String[] args) {
        int[] arr = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
        int target = 22;
        boolean ans = linearS(arr, target);
        System.out.println("element is available at index no:" + ans);
    }

    static boolean linearS(int[] arr, int target) {
        if (arr.length == 0) {
            return false;
        }
        for (int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if (element == target)
                return true;
        }

        return false;
    }

}
