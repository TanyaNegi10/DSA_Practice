package Array;

public class TrappingRainWater {
    static int trap(int[] height) {
        int leftmax[]=new int[height.length];
        int rightmax[]=new int [height.length];
        int n=height.length;
        int l=height[0];
        int r=height[n-1];
        int cnt=0;
        leftmax[0]=0;
        rightmax[n-1]=0;
        for(int i=1;i<n-1;i++)
        {
            l=Math.max(l,height[i]);
            leftmax[i]=l;
            r=Math.max(r, height[n-i-1]);
            rightmax[n-i-1]=r;
        }
        leftmax[n-1]=l;
        rightmax[0]=r;
        for(int el:height)
        {
            System.out.print(el+" ");
        }
        System.out.println();
        // System.out.println("l "+l+" r "+r);
        System.out.println("Left");
        for(int el:leftmax)
        {
            System.out.print(el+" ");
        }
        System.out.println();
        System.out.println("Right");
        for(int el:rightmax)
        {
            System.out.print(el+" ");
        }
        System.out.println();


        for(int i=1;i<n-1;i++)
        {
            int s=leftmax[i]-rightmax[i];
            
            if(s<=0)
            {
                System.out.print(leftmax[i]-height[i]+" ");
                cnt+=leftmax[i]-height[i];
            }else{
                System.out.print(rightmax[i]-height[i]+" ");
                cnt+=rightmax[i]-height[i];
            }
        }
        return cnt;

    }
    public static void main(String[] args) {
        int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(trap(height));
    }
}
