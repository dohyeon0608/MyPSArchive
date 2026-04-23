import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] input = (new Scanner(System.in)).nextLine().split(" ");
        System.out.println(Integer.parseInt(input[0]) * Integer.parseInt(input[1]));
    }
}
