package Array;

public class segregate0s1s {
    public static void main(String[] args) {
        int arr[]={1,1,1,0};
        int i=0;
        int e=arr.length-1;
        while(i<=e)
        {
            if(arr[i]==0)
            {
                i++;
            }
            if(arr[e]==1)
            {
                e--;
            }
            int temp=arr[i];
            arr[i]=arr[e];
            arr[e]=temp;
            i++;
        }
        for(int ele:arr)
        {
            System.out.print(ele+" ");
        }
    }
    
}
