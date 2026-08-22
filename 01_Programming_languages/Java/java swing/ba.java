import javax.swing.JOptionPane;

public class ba {

	public static void main(String[] args) {
		
        // create input dialog box 
        // input default return's string
		String name = JOptionPane.showInputDialog("Enter your name");
        // show dialog box
		JOptionPane.showMessageDialog(null, "Hello "+name);
		
        // //Integer.parseInt -> covert's string to integer
		// int age = Integer.parseInt(JOptionPane.showInputDialog("Enter your age"));
		// JOptionPane.showMessageDialog(null, "You are "+age+" years old");
		
		// double height = Double.parseDouble(JOptionPane.showInputDialog("Enter your height"));
		// JOptionPane.showMessageDialog(null, "You are "+height+" cm tall");
	}	
}