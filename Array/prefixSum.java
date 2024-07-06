package Array;
//prefix sum with range query
public class prefixSum {
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5,6};
        int prefix[]=new int[arr.length];
        int queries[][]={{0,3},{2,5},{2,4}};
        prefix[0]=arr[0];
        for(int i=1;i<arr.length;i++)
        {
            prefix[i]=prefix[i-1]+arr[i];

        }
        for(int i:arr)
        {
            System.out.print(i+" ");
        }
        System.out.println();
        for(int i:prefix)
        {
            System.out.print(i+" ");
        }
        System.out.println();
        for(int i=0;i<queries.length;i++)
        {
            int lb=queries[i][0];
            int ub=queries[i][1];
            int sum=prefix[ub]-prefix[lb]+arr[lb];
            System.out.println("Range Query Sum ("+lb+","+ub+")"+"="+sum);
        }
    }
    
}
