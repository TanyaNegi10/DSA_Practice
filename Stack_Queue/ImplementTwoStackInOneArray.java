package Stack;

class TwoStack{
    int arr[];
    int capacity;
    int top1;
    int top2;
    TwoStack(int capacity)
    {
        this.capacity=capacity;
        arr=new int[this.capacity];
        top1=-1;
        top2=capacity;
    }
    void push1(int val)
    {
        if(top1<top2-1)
        {
            top1++;
            arr[top1]=val;
        }
    }

    void push2(int val)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]=val;
        }
    }

    int pop1(){
        if(top1>capacity){
            int val=arr[top1];
            top1--;
            return val;
        }else{
            throw new RuntimeException("Stack1 is empty...");
        }
    }
    int pop2(){
        if(top2>capacity){
            int val=arr[top2];
            top2++;
            return val;
        }else{
            throw new RuntimeException("Stack2 is empty...");
        }
    }

    void peek1(){
        for(int i=top1;i>=0;i--)
        {
            System.out.println(arr[i]);
        }
    }
    void peek2(){
        for(int i=top2;i>=0;i--)
        {
            System.out.println(arr[i]);
        }
    }
}
public class ImplementTwoStackInOneArray {
    public static void main(String[] args) {
        TwoStack obj=new TwoStack(10);
        obj.push1(10);
        obj.push1(20);
        obj.push1(30);

        System.out.println("*****************");
    }
}
