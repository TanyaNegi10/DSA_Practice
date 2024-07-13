package Array;
import java.util.*;
public class MinMoveToMakeUnique {
    public static void main(String[] args) {
        int nums[] = {3,2,1,2,1,7};
        Arrays.sort(nums);
        int minInc=0;
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]<=nums[i-1]){
                int inc=nums[i-1]+1-nums[i];
                minInc+=inc;
                nums[i]=nums[i-1]+1;
            }
        }
        System.out.println(minInc);

    }
    
}
