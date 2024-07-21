package Tree;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class BinaryTreeNode<T>{
    T data;
    BinaryTreeNode<T> left;
    BinaryTreeNode<T> right;
    BinaryTreeNode(T data)
    {
        this.data=data;
    }
}

class BinaryTreeOperations{
    String nodeName="parent";
    Scanner sc=new Scanner(System.in);
    BinaryTreeNode<Integer> add()
    {
        System.out.println("Enter the node data in a tree"+nodeName);
        int data=sc.nextInt();
        if(data==-1)
        {
            return null;
        }
        BinaryTreeNode<Integer>newNode=new BinaryTreeNode<>(data);
        nodeName="left";
        newNode.left=add();
        nodeName="right";
        newNode.right=add();
        nodeName="parent";
        return newNode;
    }

    void levelOrder(BinaryTreeNode<Integer>root)
    {
        Queue<BinaryTreeNode<Integer>>queue=new LinkedList<>();
        queue.offer(root);
        int level=0;
        while(!queue.isEmpty())
        {
            int size=queue.size();
            System.out.print("Level "+level+" : ");
            for(int i=0;i<size;i++)
            {
                BinaryTreeNode<Integer>node=queue.poll();
                System.out.print(node.data+" ");
                if(node.left!=null)
                {
                    queue.offer(node.left);
                }
                if(node.right!=null)
                {
                    queue.offer(node.right);
                }
            }
            level++;
            System.out.println();
        }
    }

    //TC:(2)^n
    void preOrder(BinaryTreeNode<Integer>parent)
    {
        if(parent==null)
        {
            return;
        }
        System.out.println(parent.data);
        preOrder(parent.left);
        preOrder(parent.right);
    }

    void inorder(BinaryTreeNode<Integer>parent)
    {
        if(parent==null)
        {
            return;
        }
        preOrder(parent.left);
        System.out.println(parent.data);
        preOrder(parent.right);
    }
    void postorder(BinaryTreeNode<Integer>parent)
    {
        if(parent==null)
        {
            return;
        }
        postorder(parent.left);
        postorder(parent.right);
        System.out.println(parent.data);
    }

    void print(BinaryTreeNode<Integer>root)
    {
        //Base Case
        if(root==null)
        {
            return;
        }
        String result="";
        //Traverse in left

        int parent=root.data;
        result+="P => "+parent;
        if(root.left!=null)
        {
            int leftData=root.left.data;
            result+=" L => "+leftData;
        }
        //Traverse in right
        if(root.right!=null)
        {
            int rightData=root.right.data;
            result+=" R => "+rightData;
        }
        System.out.println(result);
        print(root.left);
        print(root.right);

    }
   
}
public class BinaryTreeDemo {
    public static void main(String[] args) {
        BinaryTreeOperations opr=new BinaryTreeOperations();
        BinaryTreeNode<Integer> root=opr.add();
        // opr.print(root);10
        // opr.preOrder(root);
        // opr.inorder(root);
        // opr.postorder(root);
        opr.levelOrder(root);
        
    }

    
}
