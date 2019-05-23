import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int hand = 0;
            while(n-- > 0){
                int a = sc.nextInt();
                hand ^= a;
            }
            System.out.printf("%c %c\n", (hand&1)==0?'D':'U', (hand&2)==0?'D':'U');
        }
    }
}