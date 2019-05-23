import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] di = {0,-1,0,+1};
        int[] dj = {+1,0,-1,0};
        while(t-- > 0){
            int m = sc.nextInt();
            int n = sc.nextInt();
            char[][] map = new char[m][n];
            int fi=-1, fj=-1;
            int ans = 0;
            for(int i = 0; i < m; ++i){
                String tmp = sc.next();
                for(int j = 0; j < n; ++j){
                    map[i][j] = tmp.charAt(j);
                    if(tmp.charAt(j) == 'W'){
                        fi = i;
                        fj = j;
                        map[i][j] = '.';
                    }
                }
            }
            //push->add, front&pop->poll
            Queue<Integer> qi = new ArrayDeque<Integer>();
            Queue<Integer> qj = new ArrayDeque<Integer>();
            qi.add(fi);
            qj.add(fj);
            while(true){
                Integer i = qi.poll();
                Integer j = qj.poll();
                if(i == null || j == null) break;
                for(int k = 0; k < 4; ++k){
                    int ni = i, nj = j;
                    for(int l = 1; l < 10; ++l){
                        ni += di[k]; nj += dj[k];
                        if(finish(ni,nj,n,m) || map[ni][nj]=='#') break;
                        if(map[ni][nj]=='.') continue;
                        if(map[ni][nj]-'0' >= l){
                            map[ni][nj] = '.';
                            ans++;
                            qi.add(ni);
                            qj.add(nj);
                            break;
                        }
                    }
                }
            }
            System.out.println(ans);
        }
    }
    public static boolean finish(int ni, int nj, int n, int m){
        return ni<0||m<=ni||nj<0||n<=nj;
    }
}