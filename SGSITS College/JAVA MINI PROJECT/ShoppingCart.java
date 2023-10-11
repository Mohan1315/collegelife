import java.util.ArrayList;

class ShoppingCart {
    private ArrayList<Product> items;

    public ShoppingCart() {
        items = new ArrayList<>();
    }

    public void addToCart(Product product) {
        items.add(product);
    }

    public double calculateTotal() {
        double total = 0;
        for (Product item : items) {
            total += item.getPrice();
        }
        return total;
    }
    public void displayCart() {
        System.out.println("Items in your shopping cart:");
        for (Product item : items) {
            System.out.println(item.getName() + " - $" + item.getPrice());
        }
        System.out.println("Total: $" + calculateTotal());
    }
}