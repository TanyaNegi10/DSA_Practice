package Strings;

public class StringReverse {
    static String reverse(String str)
    {
        // if(str.length()==0)
        // {
        //     return str.substring(0, 0);
        // }
        // String r=str.charAt(str.length()-1) +reverse(str.substring(0, str.length()-1));
        // return r;

        if(str.length()==0)
        {
            return "";
        }
        String smallString=reverse(str.substring(1));
        char firstChar=str.charAt(0);
        return smallString+firstChar;
    } 
    public static void main(String[] args) {
        String s=reverse("Taniya");
        System.out.println(s);
    }
    
}
