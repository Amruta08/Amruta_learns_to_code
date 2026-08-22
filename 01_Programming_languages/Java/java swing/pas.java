import java.awt.Color;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;


public class pas {

    public static void main(String[] args){

        JLabel label = new JLabel();
        label.setText("HI");

        ImageIcon icon = new ImageIcon("logo.png");
        label.setIcon(icon);

        JFrame frame = new JFrame();
        // JPanel = a GUI component that functions as a container to hold other components

        JPanel REDpanel = new JPanel();
        REDpanel.setBackground(Color.red);
        REDpanel.setBounds(0,0,100,100);
        frame.add(REDpanel);  // adding panel component
        REDpanel.add(label);

        JPanel BLUEpanel = new JPanel();
        BLUEpanel.setBackground(Color.BLUE);
        BLUEpanel.setBounds(100, 0, 100, 100);
        frame.add(BLUEpanel);
        BLUEpanel.add(label);

        JPanel Gpanel = new JPanel();
        Gpanel.setBackground(Color.GREEN);
        Gpanel.setBounds(0, 100, 200, 100);
        frame.add(Gpanel);
        Gpanel.add(label);
        //Gpanel.setLayout(new BorderLayout());

        




        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);
        frame.setSize(500, 500);
        frame.setVisible(true);

    }
    
}
