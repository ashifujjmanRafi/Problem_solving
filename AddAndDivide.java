import java.util.Scanner;

public class AddAndDivide {

    public static void main(String[] args) {
        try(Scanner in=new Scanner(System.in)){
            int tc = in.nextInt();
            for(int i=0;i<tc;i++){
                int a=in.nextInt();
                int b=in.nextInt();
                
                getAns(a,b);

            }
        }
    }

    private static void getAns(int a, int b) {
        int x = 0;
        if (b < 2){
            b = 2;
            x = 1;}

        while (a != 0) {

            a = a / b;
            b = b + 1;
            x++;
        }
        System.out.println(x);
    }
}
