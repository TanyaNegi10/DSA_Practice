package Array;

public class FillingBookCaseShelves {
    static int cnt=0;
    static int minHeightShelves(int[][] books, int shelfWidth) {
        int height=0;
        int n=books.length;
        
        return cnt;
    }
    static int helper(int[][] books,int shelfWidth,int i,int w)
    {
        if(i==books.length-1)
        {
            return books[i][1];
        }
        if(w>shelfWidth)
        {
            return 0;
        }
        int height=Math.max(books[i][1],helper(books, shelfWidth, i+1,w+books[i][0]));
        cnt+=height;
        return helper(books, shelfWidth, i+1, 0);

    }
    public static void main(String[] args) {
        // int[][] books={{1,1},{2,3},{2,3},{1,1},{1,1},{1,1},{1,2}};
        // int shelfWidth=4;
        int[][] books={{1,3},{2,4},{3,2}};
        int shelfWidth=6;
        System.out.println(minHeightShelves(books, shelfWidth));
    }
    
}
