import java.util.*;

public class Main{
    public static void main(String[] args){
        int t,a,b,p;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int tt = 0;tt < t;++tt){
            int ans = 0;
            a = sc.nextInt();
            b = sc.nextInt();
            p = sc.nextInt();
            for(int i = 1;i * a <=  p;++i)
                    if(p - a * i > 0 && (p - a * i) % b == 0)++ans;
            System.out.println(ans);
        }
    }
}