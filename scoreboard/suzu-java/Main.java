import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            if(a>b){
                if(a==33&&b==4){
                    System.out.println("Marines");
                }else{
                    System.out.println("Win");
                }
            }else if(a<b){
                if(a==4&&b==33){
                    System.out.println("Tigers");
                }else{
                    System.out.println("Lose");
                }
            }else{
                System.out.println("Draw");
            }
        }
    }
}