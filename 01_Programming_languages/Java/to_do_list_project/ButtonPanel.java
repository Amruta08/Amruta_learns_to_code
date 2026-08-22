package project;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.border.Border;
import java.awt.Dimension;
import java.awt.Font;

public class ButtonPanel extends JPanel {
    private JButton addTask;
    Border emptyBorder = BorderFactory.createEmptyBorder();

    //Constructor
    ButtonPanel(){
        this.setPreferredSize(new Dimension(400,60));
        addTask = new JButton("Add task");
        addTask.setBorder(emptyBorder);
        addTask.setFont(new Font("Sans-serif", Font.BOLD, 20));
        this.add(addTask);
        this.add(Box.createHorizontalStrut(20));
    }

    public JButton getAddTask(){
        return addTask;
    }
}
