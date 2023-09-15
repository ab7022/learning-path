import java.io.*;

public class lab4 {

    static class PayOutOfBounds extends Exception {
        public void showError() {
            System.out.println("invalid pay");
        }
    }

    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int m = 0;
        try {
            System.out.println("enter pay");
            m = Integer.parseInt(br.readLine());
            if (m > 10000) {
                System.out.println("your pay" + m);
                throw new PayOutOfBounds();
            }
        } catch (PayOutOfBounds e) {
            e.showError();
        }
    }
}
