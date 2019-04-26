import java.util.*;

public class Main{
    public static void main(String[] args){
        int t,p;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int tt = 0;tt < t;++tt){
            int ans = 0;
            p = sc.nextInt();
            for(int i = 1;i <= p;++i)
                for(int j = 1;j <= p;++j) 
                    if(p % (i * j) == 0)++ans;
            System.out.println(ans);
        }
    }
}