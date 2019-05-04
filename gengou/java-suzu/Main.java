import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int y = sc.nextInt();
            int m = sc.nextInt();
            int d = sc.nextInt();
            if(m==12){
                System.out.printf("%d %d %d\n", y+1, 1, d);
            }else{
                System.out.printf("%d %d %d\n", y, m+1, d);
            }
        }
    }
}