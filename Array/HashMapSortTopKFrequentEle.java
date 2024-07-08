package Array;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

// Top K Frequent element in array 
//here how to sort map value is defined 
public class HashMapSortTopKFrequentEle {
    public static void main(String[] args) {
        int nums[] = {1,1,1,2,2,3};
        int k=2;
        int ans[]=new int[k];
        HashMap<Integer,Integer>map=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
        }
        System.out.println(map);
        ArrayList<Map.Entry<Integer,Integer>>l= new ArrayList<>(map.entrySet());
        Collections.sort(l,(first,second)->
        first.getValue().equals(second.getValue())?second.getKey().compareTo(first.getKey()):    //second.compareTo is written first for descending order ow it is ascending 
        second.getValue().compareTo(first.getValue()));
        int i=0;
        for(Map.Entry<Integer,Integer>m:l)
        {
            int key=m.getKey();
            if(i<k)
            {
                ans[i]=key;
                i++;
            }
        }
        for(int el:ans)
        {
            System.out.print(el+" ");
        }

    }
    
}
