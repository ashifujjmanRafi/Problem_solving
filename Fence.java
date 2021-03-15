import java.util.Scanner;

public class Fence{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int tc= in.nextInt();
        for(int i=0;i<tc;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();
            long x=(a+b+c)-1;

            System.out.println(x);
            
        }
    }
}