import java.util.Scanner;

public class HPNthTerm {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term (a): ");
        int a = sc.nextInt();

        System.out.print("Enter common difference (d): ");
        int d = sc.nextInt();

        System.out.print("Enter term number (n): ");
        int n = sc.nextInt();

        double term = 1.0 / (a + (n - 1) * d);

        System.out.println("The " + n + "th term of HP is: " + term);

        sc.close();
    }
}
