import java.util.ArrayList;
import java.util.List;

class Item {
    private String itemName;
    private double price;
    private int quantity;

    public Item(String itemName, double price, int quantity) {
        this.itemName = itemName;
        this.price = price;
        this.quantity = quantity;
    }

    public String getItemName() {
        return itemName;
    }

    public double getPrice() {
        return price;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
}

class ShoppingCart {
    private List<Item> cartItems = new ArrayList<>();

    public void addItem(Item item) {
        cartItems.add(item);
    }

    public void removeItem(Item item) {
        cartItems.remove(item);
    }

    public void viewCart() {
        for (Item item : cartItems) {
            System.out.println("Item: " + item.getItemName() + ", Price: $" + item.getPrice() + ", Quantity: " + item.getQuantity());
        }
    }

    public double calculateTotal() {
        double total = 0;
        for (Item item : cartItems) {
            total += item.getPrice() * item.getQuantity();
        }
        return total;
    }
}

public class Main {
    public static void main(String[] args) {
        ShoppingCart cart = new ShoppingCart();

        Item item1 = new Item("Product A", 10.99, 2);
        Item item2 = new Item("Product B", 5.49, 3);

        cart.addItem(item1);
        cart.addItem(item2);

        System.out.println("Items in the cart:");
        cart.viewCart();

        System.out.println("Total price: $" + cart.calculateTotal());

        cart.removeItem(item1);

        System.out.println("Updated cart after removing item:");
        cart.viewCart();
}
}