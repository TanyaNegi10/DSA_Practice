package Array;

import java.util.ArrayList;
import java.util.List;

public class SpiralMatrix {
    static List<Integer> spiralOrder(int[][] matrix) {
        int row=matrix.length;
        int cols=matrix[0].length;
        boolean[][] visit=new boolean[row][cols];
        int i=0;
        int j=0;
        Character ch='R';
        List<Integer>list=new ArrayList<>();
        int c=row*cols;
        int k=0;
        while(k<c)
        {
            if(ch=='R')
            {
                if(j<cols && !visit[i][j])
                {
                    list.add(matrix[i][j]);
                    visit[i][j]=true;
                    k++;
                    j++;
                    System.out.println(list);
                    System.out.println("k "+k);
                    // System.out.println("M "+matrix[i][j]);
                }else{
                    i++;
                    j--;
                    ch='B';
                }
            }
            if(ch=='B')
            {
                if(i<row && !visit[i][j])
                {
                    list.add(matrix[i][j]);
                    visit[i][j]=true;
                    k++;
                    i++;
                }else{
                    i--;
                    j--;
                    ch='L';
                }
            }
            if(ch=='L')
            {
                if(j>=0 && !visit[i][j])
                {
                    list.add(matrix[i][j]);
                    visit[i][j]=true;
                    k++;
                    j--;
                }else{
                    j++;
                    i--;
                    ch='U';
                }
            }
            if(ch=='U')
            {
                if(i>=0 && !visit[i][j])
                {
                    list.add(matrix[i][j]);
                    visit[i][j]=true;
                    k++;
                    i--;
                }else{
                    i++;
                    j++;
                    ch='R';
                }
            }
        }
        return list;
    }
    public static void main(String[] args) {
        int[][] matrix={{1,2,3},{4,5,6},{7,8,9}};
        List<Integer>list=spiralOrder(matrix);
        System.out.println(list);
    }
    
}
