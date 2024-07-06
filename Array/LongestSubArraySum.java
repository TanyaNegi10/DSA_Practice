package Array;
//longest subarray whose sum is <=k
public class LongestSubArraySum {
    public static void main(String[] args) {
        int arr[]={3,1,2,7,4,2,1,1,5};
        int k=8;
        //maintain 2 pointers
        int left=0;
        int currentSum=0;
        int max=0;
        for(int right=0;right<arr.length;right++){
            currentSum=currentSum+arr[right];
            while(currentSum>k)
            {
                currentSum=currentSum-arr[left];
                left++;
            }
            max=Math.max(max,(right-left+1));      //right-left+1 is used for finding longest subarray and also for counting array
        }
        System.out.println(max);

    }
    
}
