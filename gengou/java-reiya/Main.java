import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        /*入力にはScannerを用いる*/
        Scanner sc = new Scanner(System.in);

        /*T=テストケース、Y=年、M=月、D=日*/
        int T, Y, M, D;
        T = sc.nextInt();
        for(int TT=0;TT<T;++TT)
        {
            Y = sc.nextInt();
            M = sc.nextInt();
            D = sc.nextInt();

            /*12月の場合13月はないので年を1増やして月を1にする*/
            if(M==12)
            {
                System.out.println((Y + 1) + " 1 1");
            }else
            {
                System.out.println(Y + " " + (M + 1) + " 1");
            }
        }
    }
}