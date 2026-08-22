// package practicals;

// // importing necessary libraries  
// import java.awt.*;    
// import java.awt.event.*;    
// // Our class extends Frame class and implements ActionListener interface  
// public class aw extends Frame implements ActionListener {    
//     // creating instances of TextField and Button class  
//     TextField tf1, tf2, tf3;    
//     Button b1, b2;
//     private String result;   
//     // instantiating using constructor   
//     aw() {    
//         // instantiating objects of text field and button  
//         // setting position of components in frame    
//         tf3.setBounds(50, 150, 150, 20);  
//         tf3.setEditable(false);   
//         b1 = new Button("+");    
//         b1.setBounds(50, 200, 50, 50);  
            
//         // adding action listener  
//         b1.addActionListener(this);    
          
//         // adding components to frame  
        
//         add(tf3);  
//         add(b1);  
         
//         // setting size, layout and visibility of frame   
//         setSize(300,300);    
//         setLayout(null);    
//         setVisible(true);    
//     }  
//     // defining the actionPerformed method to generate an event on buttons         
//     public void actionPerformed(ActionEvent e) {    
//         String s1 = tf1.getText();    
//         String s2 = tf2.getText();       
//         String c ;   
//         if (e.getSource() == b1){    
//             c = "message"  ;  
//         }  
//         // else if (e.getSource() == b2){    
//         //    // c = a - b;    
//         // }    
//         String result = c;    
//         tf3.setText(result);    
//     }   
// // main method   
// public static void main(String[] args) {    
//     new aw();    
// }    
// }    
