import java.util.Stack;

public class stacks {
    public static void main(String[] args) {

        // New Stack object
        Stack<String> stack =  new Stack<String>();

        // stack.empty() method
        System.out.println(stack.empty()); // true

        // stack.push() method
        stack.push("Minicraft");
        stack.push("Doom");
        stack.push("Pocket ponnies");
        stack.push("Pokemon Go");

        System.out.println(stack); // [Minicraft, Doom, Pocket ponnies, Pokemon Go]

        // stack.pop() method
        System.out.println(stack.pop()); // Pokemon Go

        // stack.peek() method
        System.out.println(stack.peek()); // Pocket ponnies

        // stack.search() method
        System.out.println(stack.search("Doom")); // 2

        
    }
}
