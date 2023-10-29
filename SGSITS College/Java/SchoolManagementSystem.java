import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class SchoolManagementSystem {

    public static void main(String[] args) {

        JFrame frame = new JFrame("School Management System");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);

        // Add a panel for the content
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 2));

        // Add labels and text fields
        JLabel lbl1 = new JLabel("Name:");
        JTextField tf1 = new JTextField();

        JLabel lbl2 = new JLabel("Address:");
        JTextField tf2 = new JTextField();

        JLabel lbl3 = new JLabel("Contact:");
        JTextField tf3 = new JTextField();

        panel.add(lbl1);
        panel.add(tf1);
        panel.add(lbl2);
        panel.add(tf2);
        panel.add(lbl3);
        panel.add(tf3);

        // Add buttons
        JButton btn1 = new JButton("Save");
        JButton btn2 = new JButton("Cancel");

        panel.add(btn1);
        panel.add(btn2);

        // Add panel to frame
        frame.add(panel);

        // Add action listeners for the buttons
        btn1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // Code to save data
            }
        });

        btn2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // Code to cancel
            }
        });

        // Display the frame
        frame.setVisible(true);
    }
}