package Array;

public class RabinKarp {
    public static void main(String[] args) {
        String text="abcabdabcabe";
        String pattern="abc";
        int textHash=0;
        int patternHash=0;
        int primeRange=101;
        //compute the hash for pattern and first 3 chars of text,because pattern length is 3
        // pattern length is 3

        for(int i=0;i<pattern.length();i++)
        {
            int ascii=pattern.charAt(i);
            patternHash=(patternHash+ascii) % primeRange;
            textHash=(textHash+text.charAt(i)) % primeRange;
        }
        // System.out.println(patternHash);
        // System.out.println(textHash);
        for(int i=0;i<=text.length()-pattern.length();i++)
        {
            if(textHash==patternHash)
            {
                if(text.substring(i, i+pattern.length()).equals(pattern))
                {
                    System.out.println("found "+i);
                    // System.out.println(text.substring(i,i+pattern.length()));
                }

            }
            if(i<text.length()-pattern.length())
            {
                textHash=(textHash-text.charAt(i)+text.charAt(i+pattern.length()))%primeRange;
            }

        }
    }
    
}
