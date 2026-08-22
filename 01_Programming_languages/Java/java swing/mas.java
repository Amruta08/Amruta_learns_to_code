import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.border.Border;

import java.awt.Color;
import java.awt.Font;

public class mas {

    public static void main(String[] args) {
        JFrame frame = new JFrame(); // creates a frame

        JLabel label = new JLabel();                    // create a label
        label.setText("HeLLLLOOO");                     //set text of label
        frame.add(label);                               //add label

        ImageIcon image = new ImageIcon("logo.png"); // create an ImageIcon
        label.setIcon(image);
        // frame.setIconImage(image.getImage());        // Change icon of frame

        // create border
        Border border = BorderFactory.createLineBorder(Color.green, 3);


        label.setHorizontalTextPosition(JLabel.CENTER);  // set text LEFT,CENTER, RIGHT of imageicon
        label.setVerticalTextPosition(JLabel.TOP);  // set text Top, CENTER, BOTTOM of imageicon
        label.setForeground(new Color(0x00FF00)); // set font color of text
        label.setFont(new Font("MV Boli", Font.PLAIN,30)); // set font of text
        label.setIconTextGap(100);   // set gap of text to image

        label.setBackground(Color.BLACK); // Set background color
        label.setOpaque(true);            // display Background color

        label.setBorder(border);

        label.setVerticalAlignment(JLabel.CENTER);    // set vertical position of Icon+text within label
        label.setHorizontalAlignment(JLabel.CENTER);  // set horizontal position of Icon+text within label

        label.setBounds(50, 50, 200, 200);          // set x,y position within frame as well as dimensions
        frame.setLayout(null);
        frame.pack();          // resize size of frame to accomidate all of the components (add at last)

        
        frame.setVisible(true);  //make frame visible
        frame.setSize(420,420);  //sets x-dimension and y-dimension of frame

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //exit out of the application

        

    }
    
}
