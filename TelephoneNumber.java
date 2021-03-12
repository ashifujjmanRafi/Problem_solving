import java.util.Scanner;

public class TelephoneNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int tc = in.nextInt();
        for (int i = 0; i < tc; i++) {
            int n = in.nextInt();
            String str = in.next();

            int len=str.length();
            for (int j = 0; j < str.length(); ++j) {
                if (str.charAt(j) == '8') {
                    len = j;
                    break;
                }

            }
            if ((str.length() - len) >= 11)
                System.out.println("Yes");
            else
                System.out.println("No");

        }

    }

}
