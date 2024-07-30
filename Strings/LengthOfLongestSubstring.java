package Strings;

import java.util.ArrayList;

public class LengthOfLongestSubstring {

    static int lengthOfLongestSubstring(String s) {
       ArrayList<Character>l=new ArrayList<Character>();
        int i=0;
        int cnt=0;
        int max=0;
        while(i<s.length())
        {
            if(!l.contains(s.charAt(i)))
            {
                l.add(s.charAt(i));
                cnt++;
                max=Math.max(max,cnt);
            }else{
                int j=l.indexOf(s.charAt(i));
                if(j==0)
                {
                    l.add(s.charAt(i));
                    l.remove(j);
                }
                else{
                    while(j>=0)
                    {
                        l.remove(j);
                        j--;
                        cnt--;
                    }
                    l.add(s.charAt(i));
                    cnt++;
                }
            }
            i++;
        }
        return max;
    }
    public static void main(String[] args) {
        String s1="abcabcbb";
        String s2 = "bbbbb";
        String s3 ="pwwkew";
        System.out.println(lengthOfLongestSubstring(s1));
        System.out.println(lengthOfLongestSubstring(s2));
        System.out.println(lengthOfLongestSubstring(s3));
    }
}
