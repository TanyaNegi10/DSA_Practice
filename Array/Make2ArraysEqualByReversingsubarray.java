package Array;
public class Make2ArraysEqualByReversingsubarray {

    static boolean canBeEqual(int[] target, int[] arr) {
        int[] elements=new int[1001];
        for(int ele:target)
        {
            elements[ele]++;
        }
        for(int ele:arr)
        {
            elements[ele]--;
        }
        for(int ele:elements)
        {
            if(ele!=0)
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        int target[]={1,2,3,4};
        int arr[]={2,4,1,3};
        if(canBeEqual(target, arr))
        {
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
    
}
