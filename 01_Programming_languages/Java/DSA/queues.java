import java.util.LinkedList;
import java.util.Queue;
public class queues {
    public static void main(String[] args) {

        

        Queue<String> TicketQueue = new LinkedList<String>();

        // Insert elements in queue
        TicketQueue.offer("Amruta");
        TicketQueue.offer("Polomi");
        TicketQueue.offer("Dimple");
        TicketQueue.offer("Divya");
        TicketQueue.offer("Aditi");

        System.out.println(TicketQueue); // [Amruta, Polomi, Dimple, Divya, Aditi]

        // Peek 
        System.out.println(TicketQueue.peek()); // Amruta

        TicketQueue.poll();
        TicketQueue.poll();

        System.out.println(TicketQueue);   // [Dimple, Divya, Aditi]

        Iterator<String> t1 = TicketQueue.iterator();

    }
}
