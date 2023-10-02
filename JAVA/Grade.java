import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Grade extends JFrame {
    private JTextField nameField;
    private JTextField usnField;
    private JTextField marksField;
    private JButton generateButton;
    private JTextArea textArea;

    public Grade() {
        // Set up the GUI components
        JLabel nameLabel = new JLabel("Name:");
        nameField = new JTextField(20);

        JLabel usnLabel = new JLabel("USN:");
        usnField = new JTextField(20);

        JLabel marksLabel = new JLabel("Marks:");
        marksField = new JTextField(20);

        generateButton = new JButton("Enter");
        generateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String name = nameField.getText();
                String usn = usnField.getText();
                String marks = marksField.getText();
                Character grade;
                Integer marks1 = Integer.parseInt(marks);
                if(marks1 >= 90)
                    grade = 'A';
                else if(marks1 >= 80 && marks1 < 90)
                    grade = 'B';
                else if(marks1 >= 70 && marks1 < 80)
                    grade = 'C';
                else if(marks1 >= 60 && marks1 < 70)
                    grade = 'D';
                else
                    grade = 'F';
                String label = "Name: " + name + "\nUSN: " + usn + "\nMarks:  " + marks1 + "\nGrade: " + grade + "\n----------------------------------------------------------------";

                textArea.append(label + "\n");
            }
        });

        textArea = new JTextArea(10, 20);
        textArea.setEditable(false);

        // Set up the layout using GridBagLayout
        JPanel panel = new JPanel(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.anchor = GridBagConstraints.WEST;
        gbc.insets = new Insets(5, 5, 5, 5);

        gbc.gridx = 0;
        gbc.gridy = 0;
        panel.add(nameLabel, gbc);

        gbc.gridy = 1;
        panel.add(usnLabel, gbc);

        gbc.gridy = 2;
        panel.add(marksLabel, gbc);

        gbc.gridx = 1;
        gbc.gridy = 0;
        panel.add(nameField, gbc);

        gbc.gridy = 1;
        panel.add(usnField, gbc);

        gbc.gridy = 2;
        panel.add(marksField, gbc);

        gbc.gridy = 3;
        panel.add(generateButton, gbc);

        JScrollPane scrollPane = new JScrollPane(textArea);
        JPanel mainPanel = new JPanel(new BorderLayout());
        mainPanel.add(panel, BorderLayout.NORTH);
        mainPanel.add(scrollPane, BorderLayout.CENTER);

        setTitle("Grade");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setContentPane(mainPanel);
        pack();
        setLocationRelativeTo(null);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Grade();
    }
}
