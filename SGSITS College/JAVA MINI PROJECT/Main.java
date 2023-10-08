import java.util.*;


class Product {
    private String name;
    private double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }
}

class ShoppingCart {
    private List<Product> items = new ArrayList<>();

    public void addItem(Product product) {
        items.add(product);
    }

    public void removeItem(Product product) {
        items.remove(product);
    }

    public List<Product> getItems() {
        return items;
    }

    public double calculateTotal() {
        double total = 0;
        for (Product item : items) {
            total += item.getPrice();
        }
        return total;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ShoppingCart cart = new ShoppingCart();

        while (true) {
            System.out.println("Available Options:");
            System.out.println("1. Add Product to Cart");
            System.out.println("2. Remove Product from Cart");
            System.out.println("3. View Cart");
            System.out.println("4. Checkout");
            System.out.println("5. Exit");

            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter product name: ");
                    String productName = scanner.next();
                    System.out.print("Enter product price: ");
                    double productPrice = scanner.nextDouble();
                    Product product = new Product(productName, productPrice);
                    cart.addItem(product);
                    break;
                case 2:
                    System.out.print("Enter product name to remove: ");
                    String productNameToRemove = scanner.next();
                    for (Product item : cart.getItems()) {
                        if (item.getName().equalsIgnoreCase(productNameToRemove)) {
                            cart.removeItem(item);
                            System.out.println("Product removed from cart.");
                            break;
                        }
                    }
                    break;
                case 3:
                    List<Product> cartItems = cart.getItems();
                    if (cartItems.isEmpty()) {
                        System.out.println("Cart is empty.");
                    } else {
                        System.out.println("Cart Contents:");
                        for (Product cartItem : cartItems) {
                            System.out.println(cartItem.getName() + " - $" + cartItem.getPrice());
                        }
                        System.out.println("Total: $" + cart.calculateTotal());
                    }
                    break;
                case 4:
                    System.out.println("Checkout");
                    System.out.println("Total Amount: $" + cart.calculateTotal());
                    System.out.println("Thank you for shopping!");
                    System.exit(0);
                case 5:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
