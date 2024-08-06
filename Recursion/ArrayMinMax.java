package Recursion;

public class ArrayMinMax {
    static int[] getMinMax(int arr[],int i)
    {
        if(i==arr.length)
        {
            int num[]=new int[2];
            num[0]=Integer.MAX_VALUE;
            num[1]=Integer.MIN_VALUE;
            return num;
        }
        int result[]=getMinMax(arr, i+1);
        if(arr[i]>result[1])
        {
            result[1]=arr[i];
        }else if(arr[i]<result[0]){
            result[0]=arr[i];
        }
        return result;
    }
    public static void main(String[] args) {
        int arr[]={10,90,100,200,50,1,88,40};
        int result[]=getMinMax(arr,0);
        System.out.println("Min "+result[0]+" "+"Max "+result[1]);
    }
    
}
