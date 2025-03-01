// package linked-list;

// import org.w3c.dom.Node;
import java.util.*;

public class basicsLL {
    //display fn()
    public static void display(Node head){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }

    //node class
    public static class Node{
        int data; //value
        Node next; //address of next node
        Node(int data){
            this.data=data;
        }
    }
    public static void main(String[] args){
    //implementation of singly linked list
    
        Node a=new Node(1);
        Node b=new Node(2);
        Node c=new Node(3);
        Node d=new Node(4);
        // Node e=new Node(5);
        a.next=b;
        b.next=c;
        c.next=d;
        d.next=null;
        // System.out.println(a.next.data);

    //---Displaying a Linked List
        display(a);

    }
}
