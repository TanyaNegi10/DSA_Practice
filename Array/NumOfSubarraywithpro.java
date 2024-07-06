package Array;

public class NumOfSubarraywithpro {
        static int numSubarrayProductLessThanK(int[] nums, int k) {
            int n=0;
            int pro=1;
            int left=0;
            int right=0;
            if(k<=1){
                return 0;
            }
            while(left<nums.length )
            {
                pro=pro*nums[right];
                if(pro<k)
                {
                    System.out.println("pro "+pro);
                    System.out.println("left "+left+" right "+right);
                    n++;
                    right++;
                    if(right>=nums.length)
                    {
                        pro=1;
                        left++;
                        right=left;
                    }
    
                }else{
                    System.out.println("pro 2"+pro);
                    System.out.println("left "+left+" right "+right);
                    left++;
                    right=left;
                    pro=1;
                }
                
                // n=n+right-left+1;
            }
            return n;
        }
        public static void main(String[] args) {
            int arr[]={10,5,2,6};
            System.out.println(numSubarrayProductLessThanK(arr, 100));
        }
}
