// public class Myrame {
    
// }

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Myrame extends JFrame implements ActionListener {
	//implements ActionListener 
	
    // turning button component which is local into global component
	JButton button;
	JLabel label;
	
	Myrame(){

		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLayout(null);
		this.setSize(500,500);
		this.setVisible(true);

		button = new JButton();
		button.setBounds(100, 100, 250, 100);
		// since this class is implementing something
		button.addActionListener(this);
		
		// instead of implementing Actionlistenser class we can use a lamda expression
		// button.addActionListener(e-> System.out.println("poo"));

		button.setText("I'm a button!");
		this.add(button);

		// remove's border
		button.setFocusable(false);

		ImageIcon icon = new ImageIcon("logo.png");
		button.setIcon(icon);

		button.setHorizontalTextPosition(JButton.CENTER);
		button.setVerticalTextPosition(JButton.BOTTOM);

		button.setFont(new Font("Comic Sans",Font.BOLD,25));
		// button.setIconTextGap(-15);

		button.setForeground(Color.cyan); // text color
		button.setBackground(Color.pink); //button color

		button.setBorder(BorderFactory.createEtchedBorder());

		// button.setEnabled(false);  // disable's button

		label = new JLabel();
		ImageIcon icon2 = new ImageIcon("logo.png");
		label.setIcon(icon2);
		label.setBounds(150, 250, 150, 150);
		// set visible false because i don't want this to appear right away
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
