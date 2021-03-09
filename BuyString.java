import java.util.Scanner;

public class BuyString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int tc = in.nextInt();
        for (int i = 0; i < tc; i++) {
            getAns();
        }
    }

    private static void getAns() {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int c0 = in.nextInt();
        int c1 = in.nextInt();
        int h = in.nextInt();

        String str = in.nextLine();
        int num0 = 0, num1 = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '0')
                num0++;
            else

                num1++;
        }

        int val =(num1*c1)+(num0*c0);
        int val1 =(num0*h)+(n*c1);
        int val2 =(num1*h)+(n*c0);

        System.out.println(Math.min(val2,(Math.min(val,val1)))); 


    }
    //incomplete
    

}
