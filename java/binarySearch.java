public class binarySearch {
    public static void main(String[] args) {
        int[] arr = { 01, 11, 22, 33, 44, 55, 66, 77, 88, 99, 10 };
        int target = 10;
        int ans = binary(arr, target);
        System.out.println(ans);
    }

    static int binary(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;

            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid - 1;
            } else {
                return mid + 1;

            }
        }
        return -1;
    }
}



