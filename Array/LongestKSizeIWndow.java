package Array;

public class LongestKSizeIWndow {
    public static void main(String[] args) {
        int max=Integer.MIN_VALUE;
        int nums[]={3,-1,4,12,-8,5,6};
        int k=5;       //size of window for fixed size window sliding
        int sum=0;
        //compute the sum of first window sliding
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        max=sum;
        for(int i=k;i<nums.length;i++)
        {
            sum+=nums[i]-nums[i-k];     //add the right part and minus the left part
            max=Math.max(max,sum);
        }
        System.out.println(max);       
    }
}
