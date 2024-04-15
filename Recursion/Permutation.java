package Recursion;
import java.util.*;;
public class Permutation {
    static List<List<Integer>> subsets(int[] nums) {
        List<Integer> small = new ArrayList<>();
        List<List<Integer>> finalList = new ArrayList<>();
        helper(nums, small, finalList);
        return finalList;
    }
    static void helper(int nums[],List<Integer> small, List<List<Integer>> finalList) 
    {
        if(small.size()==nums.length)
        {
            finalList.add(new ArrayList<>(small));
        }
        for(int i=0;i<nums.length;i++)
        {
            if(!small.contains(nums[i]))
            {
                small.add(nums[i]);
                helper(nums, small, finalList);
                small.remove(small.size()-1);
            }
        }
    }
    public static void main(String[] args) {
        int nums[] = { 1, 2, 3 };
        List<List<Integer>> ans = subsets(nums);
        System.out.println("Final list");
        for (List<Integer> list : ans) {
            System.out.print("  [");

            for (Integer item : list) {
                System.out.print("  "
                        + item
                        + ", ");
            }
            System.out.println("], ");
        }

    }
}
