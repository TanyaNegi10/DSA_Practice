package BackTracking;

public class ExhaustSearch {

    static void allPosAtoZ(int nlen,String result)
    {
        if(nlen==result.length())
        {
            System.out.print(result+" ");
            return;
        }
        for(char alpha='A'; alpha<='Z';alpha++)
        {
            if(alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
            {
                allPosAtoZ(nlen, result+alpha);
            }
        }

    }
    public static void main(String[] args) {
        allPosAtoZ(2, "");
    }
}
