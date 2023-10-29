public class Chess extends JFrame {

    // Square Colors
    public static final Color DARK_GREEN = new Color(0, 150, 0);
    public static final Color LIGHT_GREEN = new Color(0, 255, 0);

    // Array for Storing Square Objects
    public static Square[][] squares = new Square[8][8];

    // Default Constructor
    public Chess() {
        setTitle("Chess Game");
        setSize(800, 800);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel board = new JPanel();
        board.setLayout(new GridLayout(8, 8));
        board.setBackground(Color.WHITE);

        // Initialize and Add Squares to Board
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                squares[row][col] = new Square(row, col);
                board.add(squares[row][col]);
            }
        }

        // Create a Scroll Pane to Display the Board
        JScrollPane scrollPane = new JScrollPane(board);
        add(scrollPane);

        // Make the Window Visible
        setVisible(true);
    }

    // Main Method for Execution
    public static void main(String[] args) {
        new Chess();
    }
}

class Square extends JButton {

    // Coordinates of Square
    public int row, col;

    // Default Constructor
    public Square(int row, int col) {
        this.row = row;
        this.col = col;

        // Set Color and Add Action Listener
        if ((row + col) % 2 == 0) {
            setBackground(Chess.DARK_GREEN);
        } else {
            setBackground(Chess.LIGHT_GREEN);
        }

        addActionListener(new SquareListener());
    }

    // Nested Class for Square Action Events
    private class SquareListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            // Output the Row and Column of the Square
            System.out.println("Square clicked: (" + row + ", " + col + ")");
        }
    }
}