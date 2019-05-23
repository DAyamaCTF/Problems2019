import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String f = "friends";
        while(t-- > 0){
            String s = sc.next();
            boolean ans = true;
            for(int i = 0; i < 7; ++i){
                if(s.charAt(i) != '*' && s.charAt(i) != f.charAt(i))
                    ans = false;
            }
            System.out.println(ans ? "Yes" : "No");
        }
    }
}