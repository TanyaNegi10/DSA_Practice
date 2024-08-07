package Strings;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

public class MinNumberOfPushesToTypeWordII {
    static int minimumPushes(String word) {
        HashMap<Character,Integer>map=new HashMap<>();
        int cnt=1;
        int numCount=0;
        int minPush=0;
        for(int i=0;i<word.length();i++)
        {
            map.put(word.charAt(i), map.getOrDefault(word.charAt(i), 0)+1);
        }
        System.out.println(map);
        ArrayList<Map.Entry<Character,Integer>>l=new ArrayList<>(map.entrySet());
        Collections.sort(l,(first,second)->second.getValue().equals(first.getValue())?first.getKey().compareTo(second.getKey()):second.getValue().compareTo(first.getValue()));
        for(Map.Entry<Character,Integer>m:l)
        {
            if(numCount==8)
            {
                cnt++;
                numCount=0;
            }
            char key=m.getKey();
            int val=m.getValue();
            int r=cnt*val;
            System.out.println(key+" "+val+" "+r);
            minPush+=r;
            numCount++;
        }
        return minPush;
    }
    public static void main(String[] args) {
        String word="aabbccddeeffgghhiiiiii";
        System.out.println(minimumPushes(word));
    }
}
