package Array;

import java.util.Arrays;

public class FillingBookCaseShelves {
    static int cnt=0;
    static int minHeightShelves(int[][] books, int shelfWidth) {
        int n=books.length;
        int arr[]=new int[n+1];
        Arrays.fill(arr, Integer.MAX_VALUE);
        arr[0]=0;
        for(int i=1;i<=n;i++)
        {
            int totalWidth=0;
            int max_height=0;
            for(int j=i;j>0;j--)
            {
                totalWidth+=books[j-1][0];
                if(totalWidth>shelfWidth)
                {
                    break;
                }
                max_height=Math.max(max_height, books[j-1][1]);
                arr[i]=Math.min(arr[i], max_height+arr[j-1]);
            }

        }
        
        return arr[n];
    }
    
    public static void main(String[] args) {
        // int[][] books={{1,1},{2,3},{2,3},{1,1},{1,1},{1,1},{1,2}};
        // int shelfWidth=4;
        int[][] books={{1,3},{2,4},{3,2}};
        int shelfWidth=6;
        System.out.println(minHeightShelves(books, shelfWidth));
    }
    
}
