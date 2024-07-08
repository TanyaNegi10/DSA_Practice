package Array;

public class FindFirstLstIndex {
    public static void main(String[] args) {
        int arr[]={1,5,10,15,20,33,33,33,33,40,42,52,62,72};
        int i=0;
        int e=arr.length-1;
        int f=0;
        int s=0;
        int ele=33;
        while(i<=e)
        {
            int mid=(i+e)/2;
            if(arr[mid]==ele)
            {
                f=mid;
                e=mid-1;            //i=mid+1;   fror lst index
            }
            else if(arr[mid]>ele)
            {
                e=mid-1;
            }else{
                i=mid+1;
            }
        }
        System.out.println("FirstIndex: "+f);
        System.out.println("lastIndex: "+s);
    }
}
