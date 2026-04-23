import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] input = (new Scanner(System.in)).nextLine().split(" ");
        int a = Integer.parseInt(input[0]);
        int b = Integer.parseInt(input[1]);
        System.out.println(a + b);
        System.out.println(a - b);
        System.out.println(a * b);
        System.out.println(a / b);
        System.out.println(a % b);
    }
}
