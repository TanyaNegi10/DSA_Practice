package Recursion;

public class armstrongnum {
    static int countdigit(int num)
    {
        if(num==0)
        {
            return 0;
        }
        int c=countdigit(num/10)+1;
        return c;
    }

    static void computeArmstrong(int num,int res,int cpy)
    {
        int d=countdigit(num);
        if(cpy==0)
        {
            if(res==num)
            {
                System.out.println("Armstrong");
            }
            else{
                System.out.println("Not Armstrong");
            }
            return;
        }
        int r=cpy%10;
        computeArmstrong(num, (int) (res+Math.pow(r, d)),cpy/10);
    }

    static int computeArmstrong2(int num,int res,int cpy)
    {
        if(cpy==0)
        {
            return res;
        }
        int d=countdigit(num);
        int r=cpy%10;
        return computeArmstrong2(num, (int) (res+Math.pow(r, d)),cpy/10);

    }
    public static void main(String[] args) {
        int num=1635;
        // computeArmstrong(num, 0,num);
        System.out.println(computeArmstrong2(num, 0, num));
    }
}
