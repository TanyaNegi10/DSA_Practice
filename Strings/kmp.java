package Array;
//KMP:- Kruth Morris Pratt
public class kmp {
    public static void main(String[] args) {
        String text="abxabcabcabz";
        String pattern="abcabz";
        int patternlength=pattern.length();
        int lps[]=new int[patternlength];
        lps[0]=0;       //bcz prefix initially
        int length=0;       //previous longest prefix length
        int i=1;
        //filling lps array
        while (i<patternlength) 
        {
            if(pattern.charAt(i)==pattern.charAt(length)){
                length++;
                lps[i]=length;
                i++;
            }
            else{
                if(length!=0)
                {
                    length=lps[length-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }     
        }

        //now do the pattern matching

        i=0;     //text
        int j=0;
        while(i<text.length())
        {
            if(pattern.charAt(j)==text.charAt(i))
            {
                i++;
                j++;
            }
            if(j==patternlength)
            {
                System.out.println("Pattern found "+(i-j));
                j=lps[j-1];
            }else if(i<text.length() && pattern.charAt(j)!=text.charAt(i)){
                if(j!=0)
                {
                    j=lps[j-1];
                }else{
                    i++;
                }
            }
        }
    }
    
}
