import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Myp extends JFrame implements ActionListener {

     // turning button component which is local into global component
    JButton button;
    JLabel label;

    Myp(){

        this.setVisible(true);    // make this visible
        this.setTitle("Title");   // sets title of this
        this.setSize(420,420);    // sets x-dimension and y-dimension of frame
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);

        button = new JButton();
        button.setBounds(100, 100, 250, 100);
        button.addActionListener(this);
        this.add(button);

        label = new JLabel();  
        label.setText("HeLLLLOOO");                     //set text of label
        label.setBounds(100, 150, 20, 50);
        label.setVisible(false);
        this.add(label);

    }

    //Implementing action performed method
	@Override
	public void actionPerformed(ActionEvent e) {
	// if event that occur's is a button 
		if(e.getSource()==button) {
			System.out.println("poo");

			// //if you want to enable button only once
    		// button.setEnabled(false);

			// setting visibility of button
			label.setVisible(true);
		}	
	}
    
}
