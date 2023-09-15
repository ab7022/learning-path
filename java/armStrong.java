import java.util.Scanner;

import javax.naming.spi.DirStateFactory.Result;
public class armStrong {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("enter a num to find is it armStrong or not");
        int nn = in.nextInt();
        System.out.println(isArm(nn));
    }
    static boolean isArm(int n){
int orignal = n;
int sum = 0;
while(n>0)
{
    int rem = n %  10;
     n= n/10;
     sum= sum+rem*rem*rem;
}
return sum==orignal;
        
    }

}
