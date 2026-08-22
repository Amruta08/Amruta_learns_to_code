import javax.swing.ImageIcon;
import javax.swing.JFrame;
import java.awt.Color;

public class mai {
    public static void main(String[] args) {
        // JFrame a GUI window to add components to

        JFrame frame = new JFrame(); // creates a frame (instance)

        frame.setVisible(true);    // make frame visible
        frame.setTitle("Title");   // sets title of frame
        frame.setSize(420,420);    // sets x-dimension and y-dimension of frame
        frame.setResizable(false); // prevent's frame from being resized

        frame.getContentPane().setBackground(Color.PINK);   // change color of background , but first import java.awt.Color
        // //frame.getContentPane().setBackground(new Color(123,50,250)); // rgb color value
        // frame.getContentPane().setBackground(new Color(0xFFF346));  // hex value


        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // exit out of the application
        // //frame.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE); // Default value 
        // //frame.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);  // does nothing on click
        // frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        ImageIcon image = new ImageIcon("logo.png"); // create an ImageIcon
        frame.setIconImage(image.getImage());        // Change icon of frame
        


    }
    
}
