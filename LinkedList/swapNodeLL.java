package LinkedList;
class Node<T> {
    T data;
    Node<T> next;

    Node(T data) {
        this.data = data;
    }
}
public class swapNodeLL {
    static Node<Integer> swap(Node<Integer> head) {
        Node<Integer> prev=head;
        Node<Integer> current=head.next;
        head=current;
        while(current!=null)
        {
            Node<Integer> next=current.next;
            current.next=prev;
            if(next==null )
            {
                prev.next=next;
                return head;
            }else if(next.next!=null){
                prev.next=next.next;
            }else if(next.next==null)
            {
                prev.next=next.next;
                return head;
            }
            prev=next;
            current=next.next;
        }
        // current.next=prev;
        return head;
    }
    static void print(Node<Integer> head) {
        Node<Integer> temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Node<Integer>head=new Node<>(1);
        Node<Integer>node2=new Node<>(2);
        Node<Integer>node3=new Node<>(3);
        Node<Integer>node4=new Node<>(4);
        // Node<Integer>node5=new Node<>(5);
        head.next=node2;
        node2.next=node3;
        node3.next=node4;
        // node4.next=node5;
        Node<Integer>ans=swap(head);
        print(ans);
    }
    
}
