package project;
import javax.swing.JLabel;
import javax.swing.JPanel;
import java.awt.Dimension;
import java.awt.Font;

public class TitleBar extends JPanel{
    TitleBar(){
        this.setPreferredSize(new Dimension(400,80));

        JLabel titletext = new JLabel("To do list");
        titletext.setPreferredSize(new Dimension(200,80));
        titletext.setFont(new Font("Sans-serif", Font.BOLD, 20));
        titletext.setHorizontalAlignment(JLabel.CENTER);

        this.add(titletext);
    } 
}
