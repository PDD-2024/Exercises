#include <iostream>
#include <vector>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string& name, double price) : name(name), price(price) {}
    
    std::string getName() const { return name; }
    double getPrice() const { return price; }
};

class Order {
private:
    std::vector<Product> products;
public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto& product : products) {
            total += product.getPrice();
        }
        return total;
    }

    void processPayment(const std::string& paymentMethod) {
        double total = calculateTotal();
        if (paymentMethod == "credit") {
            std::cout << "Processing credit card payment of $" << total << std::endl;
        } else if (paymentMethod == "paypal") {
            std::cout << "Processing PayPal payment of $" << total << std::endl;
        } else {
            std::cout << "Unknown payment method" << std::endl;
        }
    }
};

int main() {
    Product apple("Apple", 1.2);
    Product orange("Orange", 1.5);
    
    Order order;
    order.addProduct(apple);
    order.addProduct(orange);

    order.processPayment("credit");

    return 0;
}
