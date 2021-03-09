import java.util.Scanner;

public class InGameChat {

    public static void main(String[] args) {
        String str;

        Scanner in = new Scanner(System.in);

        int input = in.nextInt();

        for (int j = 0; j < input; j++) {

            int length = in.nextInt();

            str = in.next();

            int a = 0, b;

            for (int k = length - 1; k >= 0; k--) {

                if (str.charAt(k) == ')')
                    a++;

                else
                    break;

            }

            b = length - a;

            if (a > b)
                System.out.println("Yes");
            else
                System.out.println("No");

        }

    }

}
