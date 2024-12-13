#include <iostream>
using namespace std;

int main() {
    // Step 1: Define Variables
    double item_price, user_budget, total_cost;
    int quantity;
    const double discount_rate = 0.10; // 10% discount

    // Step 2: Input Collection
    cout << "Enter the price of a single item: ";
    cin >> item_price;

    cout << "Enter the quantity you want to purchase: ";
    cin >> quantity;

    cout << "Enter your maximum budget: ";
    cin >> user_budget;

    // Step 3: Calculate Total Cost
    total_cost = item_price * quantity;

    // Step 4: Apply Discount Using Conditions and Comparison
    if (quantity > 5) {
        total_cost = total_cost * (1 - discount_rate);
        cout << "A 10% discount has been applied for buying more than 5 items." << endl;
    }

    // Step 5: Check Budget Compatibility Using Comparison and Logical Operations
    if (total_cost <= user_budget) {
        cout << "Purchase successful! Your total cost is $" << total_cost 
             << ", which is within your budget." << endl;
    } else {
        cout << "Purchase failed. Your total cost is $" << total_cost 
             << ", which exceeds your budget." << endl;
    }

    // Step 6: Final Output
    cout << "Final cost after discount (if applicable): $" << total_cost << endl;

    return 0;
}
 