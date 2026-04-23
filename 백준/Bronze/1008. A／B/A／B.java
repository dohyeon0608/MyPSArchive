import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] input = (new Scanner(System.in)).nextLine().split(" ");
        System.out.println(Double.parseDouble(input[0]) / Double.parseDouble(input[1]));
    }
}
