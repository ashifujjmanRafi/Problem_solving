import java.util.Scanner;

public class Compote {
    public static void main(String[] args) {
        int lemon, apples, pears;
        try (Scanner in = new Scanner(System.in)) {
            lemon = in.nextInt();
            apples = in.nextInt();
            pears = in.nextInt();
            int min1 = Math.min(Math.min(lemon, apples / 2), pears / 4);
            System.out.println(min1*7);
        }

    }

}
