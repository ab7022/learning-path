// public class linearSearch {
//     public static void main(String[] args) {
//         int[] arr = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
//         int target = 22;
//         int ans = linearS(arr, target);
//         System.out.println("element is available at index no:" + ans);
//     }

//     static int linearS(int[] arr, int target) {
//         if (arr.length == 0) {
//             return -1;
//         }
//         for (int i = 0; i < arr.length; i++) {
//             int element = arr[i];
//             if (element == target)
//                 return i;
//         }

//         return -1;
//     }

// }
///min seaans
public class linearSearch {
    public static void main(String[] args) {
        int[] arr = { 22, 33, 44, 55, 66, 77, 88, 99 };
        int ans = arr[0];
     ans = Lowest(arr, ans);
        System.out.println("Lowest element is" + ans);
    }

    static int Lowest(int[] arr, int ans) {
        if (arr.length == 0) {
            return -1;
        }
        for (int i = 0; i < arr.length; i++) {
           
            if (arr[i] < ans)
            ans = arr[i];
         
            
                
        }

        return ans;
    }

}

