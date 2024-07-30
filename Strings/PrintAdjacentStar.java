package Strings;

public class PrintAdjacentStar {
    
    static String adjacentstar(String s)
    {
        if(s.length()<=1)
        {
            return s;
        }
        if(s.charAt(0)==s.charAt(1))
        {
            return s.charAt(0)+"*"+adjacentstar(s.substring(1));
        }else{
            return s.charAt(0)+adjacentstar(s.substring(1));
        }
    }
    public static void main(String[] args) {
        String st="AABB";
        System.out.println(adjacentstar(st));
    }
}
