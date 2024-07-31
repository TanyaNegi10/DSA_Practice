package Array;
public class CountNumOfTeams {
    static int cnt=0;
    static int numTeams(int[] rating) {
        int n=rating.length;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int leftSmall=0;
            int rightLarge=0;

            int leftLarge=0;
            int rightSmall=0;

            for(int curr=i-1;curr>=0;curr--)
            {
                if(rating[curr]>rating[i])
                {
                    leftSmall++;
                }else{
                    leftLarge++;
                }
            }
            for(int curr=i+1;curr<n;curr++)
            {
                if(rating[curr]>rating[i])
                {
                    rightSmall++;
                }else{
                    rightLarge++;
                }
            }
            cnt+=leftSmall*rightLarge;
            cnt+=leftLarge*rightSmall;
        }
        return cnt;
    }
    public static void main(String[] args) {
        int[] rating={1,2,3,4};
        System.out.println(numTeams(rating));
    }
}
