//Program to converts Celsius to Fahrenheit
import java.util.Scanner;
public class temp {
    public static void main(String[] args) {
        System.out.println("please enter temprature in celsius");
        Scanner in = new Scanner(System.in);
        float tempC = in.nextFloat(); 
        float tempF = (tempC*9/5)+32;
        System.out.println("temp in Fahrenheite is"+" "+ tempF);
    }
}
