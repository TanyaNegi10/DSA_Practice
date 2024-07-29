package Stack;

import java.util.LinkedList;
import java.util.Queue;
class MystackUsingQueue{
    Queue<Integer>queue1=new LinkedList<>();
    Queue<Integer>queue2=new LinkedList<>();
    
    void push(int data)
    {
        queue2.add(data);
        while(!queue1.isEmpty()){
            queue2.add(queue1.peek());
            queue1.remove();
        }
        // swap 2 queues
        // Temp queue for swapping purpose

        Queue<Integer> tempQueue=queue1;
        queue1=queue2;
        queue2=tempQueue;
    }
    void pop()
    {
        if(queue1.isEmpty())
        {
            throw new RuntimeException("Queue is Empty");
        }
        System.out.println(queue1.remove());
    }

}

public class StackBuildingUsingQueue {

    public static void main(String[] args) {
        MystackUsingQueue stack=new MystackUsingQueue();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.pop();
        stack.pop();
    }
    
}
