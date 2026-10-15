
#include <iostream>
#include <string>

using namespace std;
void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter units consumed: ";
    cin >> units;
}


double calculateBill(double units, double ratePerUnit) {
    return units * ratePerUnit;
}


double applyDiscount(double bill, double units) {
    if (units > 100) {
        return bill * 0.10;
    } else {
        return 0;
    }
}

void displayBill(string name, double units,
                 double bill, double discount) {
    double amountPayable = bill - discount;

    cout << "\n========== WATER BILL ==========\n";
    
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill Before Discount: KSh "
         << bill << endl;
    cout << "Discount: KSh " << discount << endl;
    cout << "Final Amount Payable: KSh "
         << amountPayable << endl;
    cout << "================================\n";
}

int main() {
    string customerName;
    double unitsConsumed;
    double ratePerUnit = 50.00;

    
    getCustomerDetails(customerName, unitsConsumed);

    double totalBill = calculateBill(
        unitsConsumed, ratePerUnit
    );

    double discount = applyDiscount(
        totalBill, unitsConsumed
    );

    displayBill(
        customerName, unitsConsumed,
        totalBill, discount
    );

    return 0;
}
