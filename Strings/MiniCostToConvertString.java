package Strings;
import java.util.Arrays;

class Pair{
    char og;
    int in;
    Pair(char og,int in)
    {
        this.og=og;
        this.in=in;
    }
}
public class MiniCostToConvertString {
    
    static long minimumCost(String source, String target, char[] original, char[] changed, int[] cost) {
        int [][]dis=new int[26][26];
        for(int i=0;i<26;i++)
        {
            Arrays.fill(dis[i], Integer.MAX_VALUE);
            dis[i][i]=0;
        }
        for(int i=0;i<original.length;i++)
        {
            dis[original[i]-'a'][changed[i]-'a']=Math.min(dis[original[i]-'a'][changed[i]-'a'],cost[i]);
        }

        //floyd warshall

        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(dis[j][i]<Integer.MAX_VALUE)
                {
                    for(int k=0;k<26;k++)
                    {
                        if(dis[i][k]<Integer.MAX_VALUE)
                        {
                            dis[j][k]=Math.min(dis[j][k],dis[j][i]+dis[i][k]);
                        }
                    }
                }

            }
        }

        long ans=0;
        for(int i=0;i<source.length();i++)
        {
            int c1=source.charAt(i)-'a';
            int c2=target.charAt(i)-'a';
            if(dis[c1][c2]==Integer.MAX_VALUE)
            {
                return -1;
            }else{
                ans+=(long)dis[c1][c2];
            }
        }
        return ans;
    }
    
    public static void main(String[] args) {
        String source = "aaaa";
        String  target = "bbbb";
        char[] original = {'a','c'};
        char[] changed = {'c','b'};
        int[] cost = {1,2};
        System.out.println("Cost "+minimumCost(source, target, original, changed, cost));
        System.out.println('o'-'a');
    }
    
}
