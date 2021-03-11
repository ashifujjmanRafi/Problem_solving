import java.util.Scanner;

public class NewYearHurry {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, k;
        n = in.nextInt();
        k = in.nextInt();
        int i;
        
        for(i=1 ;i<=n; i++){
            k=k+5*i;
            if(k>240)
                break;

        }
        //System.out.println(k);
        System.out.println(i-1);
    }

}
