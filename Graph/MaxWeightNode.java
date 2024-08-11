package Graph;

import java.util.ArrayList;

public class MaxWeightNode {
    static int maxWeightCell(int N, int Edge[]){
       ArrayList<ArrayList<Integer>>adjList=new ArrayList<>();
       for(int i=0;i<N;i++)
       {
           adjList.add(new ArrayList<>());
       }
       for(int i=0;i<N;i++)
       {
           if(Edge[i]!=-1)
           {
                adjList.get(Edge[i]).add(i);              
           }
       }
       int cell=0;
       int maxWeight=0;
       for(ArrayList<Integer>list:adjList)
       {
           int weight=0;
           for(int num:list)
           {
               weight+=num;
           }
           
           if(weight>=maxWeight)
           {
               maxWeight=weight;
               cell=adjList.indexOf(list);
           }
       }
       return cell;
    }
    public static void main(String[] args) {
        int N=4;
        int Edge[]={2,0,-1,2};
        System.out.println(maxWeightCell(N, Edge));
    }
    
}
