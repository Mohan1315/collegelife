import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.KeyGenerator;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.security.NoSuchAlgorithmException;

public class EncryptionDecryptionApp {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Encryption & Decryption");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 200);
        frame.setLayout(new FlowLayout());

        JTextField inputText = new JTextField(20);
        JTextArea encryptedText = new JTextArea(4, 20);
        JTextArea decryptedText = new JTextArea(4, 20);
        JButton encryptButton = new JButton("Encrypt");
        JButton decryptButton = new JButton("Decrypt");

        frame.add(inputText);
        frame.add(encryptButton);
        frame.add(encryptedText);
        frame.add(decryptButton);
        frame.add(decryptedText);

        encryptButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    String input = inputText.getText();
                    SecretKey secretKey = generateSecretKey();
                    Cipher cipher = Cipher.getInstance("AES");
                    cipher.init(Cipher.ENCRYPT_MODE, secretKey);
                    byte[] encryptedBytes = cipher.doFinal(input.getBytes());
                    encryptedText.setText(new String(encryptedBytes));
                } catch (Exception ex) {
                    ex.printStackTrace();
                }
            }
        });

        decryptButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    String encryptedTextString = encryptedText.getText();
                    SecretKey secretKey = generateSecretKey();
                    Cipher cipher = Cipher.getInstance("AES");
                    cipher.init(Cipher.DECRYPT_MODE, secretKey);
                    byte[] decryptedBytes = cipher.doFinal(encryptedTextString.getBytes());
                    decryptedText.setText(new String(decryptedBytes));
                } catch (Exception ex) {
                    ex.printStackTrace();
                }
            }
        });

        frame.setVisible(true);
    }

    private static SecretKey generateSecretKey() throws NoSuchAlgorithmException {
        KeyGenerator keyGenerator = KeyGenerator.getInstance("AES");
        keyGenerator.init(128); // You can choose the key size (128, 192, or 256 bits)
        return keyGenerator.generateKey();
    }
}
