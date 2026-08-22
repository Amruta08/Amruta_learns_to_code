
import java.util.Arrays;
import java.util.HashSet;
import java.util.ArrayList;
import java.util.Set;
import java.util.TreeSet;

public class arrlis {
    public static void main(String[] args) {

        // String Arraylist
        ArrayList<String> alist = new ArrayList<String>();

        alist.add(new String("One"));
        alist.add(new String("two"));
        alist.add(new String("three"));

        System.out.println(alist);  // [One, two, three]

        System.out.println(alist.get(0));  // One
        System.out.println(alist.get(1));  // two
        System.out.println(alist.get(2));  // three
   

        // Integer Arraylist
        ArrayList<Integer> blist = new ArrayList<Integer>();

        blist.add(1);
        blist.add(2);
        blist.add(3);

        System.out.println(blist);  // [1, 2, 3]

        // Normal Integer array
        int[] arr = new int[3];
        arr[0] = 1;
        arr[1] = 3;
        arr[2] = 2;

        System.out.println(arr);  //[I@2c7b84de
        System.out.println(Arrays.toString(arr)); //[1, 2, 3]


        // -----------------------------------------------------

        // String set
        Set<String> s1 = new HashSet<String>();

        s1.add("A");
        s1.add("C");
        s1.add("B");

        System.out.println(s1);  //[A, B, C]

        // Does not add an extra 'C'
        s1.add("C");
        System.out.println(s1);  //[A, B, C]

        // But is add the new "D"
        s1.add("D");
        System.out.println(s1);  //[A, B, C, D]


        // Treeset
        Set<Integer> t1 = new TreeSet<>();

        t1.add(5);
        t1.add(0);
        t1.add(1);
        t1.add(4);
        t1.add(2);
        t1.add(6);
        t1.add(3);

        System.out.println(t1);  //[A]

        for(Integer value:t1){
                System.out.println(value);
        }

        
    }
}
