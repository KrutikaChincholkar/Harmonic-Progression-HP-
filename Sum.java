import java.util.Scanner;

public class HPSum {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term (a): ");
        int a = sc.nextInt();

        System.out.print("Enter common difference (d): ");
        int d = sc.nextInt();

        System.out.print("Enter number of terms (n): ");
        int n = sc.nextInt();

        double sum = 0;

        for(int i = 0; i < n; i++) {
            sum += 1.0 / (a + i * d);
        }

        System.out.println("Sum of HP series = " + sum);

        sc.close();
    }
}
