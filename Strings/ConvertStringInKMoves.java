package Strings;

public class ConvertStringInKMoves {
    static boolean canConvertString(String s, String t, int k) {
        int i = 0;
        if(s.length()!=t.length())
        {
            return false;
        }
        int ch[]=new int[26];
        while (i < s.length()) {
            if (s.charAt(i) == t.charAt(i)) {
                i++;
            } else {
                int c1 = t.charAt(i) ;
                int c2 = s.charAt(i) ;
                int n =c1-c2;
                if(n<0)
                {
                    n+=26;
                }
                if (ch[n]==0) {
                    if(n<=k)
                    {
                        ch[n]=n;
                    }else{
                        return false;
                    }
                }
                else
                {
                    if(ch[n]+26<=k)
                    {
                        ch[n]+=26;
                    }else{
                        return false;
                    }
                }
                i++;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        String s = "bpmaaaljbfdp";
        String t = "djzbvyjrkkbs";
        int k = 115;
        System.out.println(canConvertString(s, t, k));
        // System.out.println('z'-'x'+('j'-'a')+1);
        // System.out.println('n'>'u');
    }
}
