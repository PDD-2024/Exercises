# SOLID Principles Code Refactoring Exercise

## Objective

In this exercise, you will apply SOLID design principles to refactor an existing C++ codebase. Specifically, you'll focus on the **Single Responsibility Principle** (SRP) and the **Open/Closed Principle** (OCP).

Your task is to analyze and modify the provided code to make it more modular, maintainable, and extendable without requiring changes to existing code. This will involve separating responsibilities and creating abstractions to adhere to SOLID principles.

---

## Problem Statement

You are given a simple C++ e-commerce system that models a basic order processing flow with products and payments. However, the current code violates several SOLID principles:

1. **Single Responsibility Principle (SRP):** The `Order` class has multiple responsibilities, including managing products and handling payment processing.
2. **Open/Closed Principle (OCP):** The current design of the `Order` class requires modification to add new payment methods.

### Your Task

1. **Identify SRP Violations**  
   Notice that the `Order` class currently handles both order management and payment processing. Refactor the code to separate these responsibilities. 

2. **Identify OCP Violations**  
   In the current implementation, adding a new payment method requires modifying the `Order` class. Refactor the code to make it **open for extension but closed for modification** so that new payment methods can be added without altering existing classes.

---

## Requirements

1. **Create a `PaymentProcessor` Interface**  
   - Define an abstract `PaymentProcessor` class that declares a `processPayment` method.
   - This will serve as an interface for different types of payment processors.

2. **Implement Concrete Payment Processors**  
   - Create separate classes for each payment method, such as `CreditCardProcessor` and `PayPalProcessor`, which implement the `PaymentProcessor` interface.
   - Each payment processor should handle its specific payment processing logic.

3. **Refactor the `Order` Class**  
   - Remove the payment processing logic from the `Order` class.
   - Instead, update the `Order` class to focus only on managing products and calculating totals.

4. **Introduce a `Checkout` Class**  
   - Create a new class named `Checkout` that will handle the payment process using the `PaymentProcessor` interface.
   - The `Checkout` class should accept any `PaymentProcessor` to process the payment.

---

## Provided Code

Here is the initial code that you will refactor:

```cpp
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
```

---

## Expected Solution Structure

Your refactored code should have the following structure:

- `Product`: Represents individual products, unchanged.
- `PaymentProcessor` (Interface): Abstract base class for payment processors.
- `CreditCardProcessor` and `PayPalProcessor`: Concrete implementations of `PaymentProcessor`.
- `Order`: Manages products and calculates total price, without handling payments.
- `Checkout`: Responsible for processing payments using a `PaymentProcessor`.

---

## Additional Notes

- Make sure to test your refactored code to ensure that it produces the same output as the initial code.
- Avoid changing the behavior of the program; your changes should be structural to adhere to SOLID principles.