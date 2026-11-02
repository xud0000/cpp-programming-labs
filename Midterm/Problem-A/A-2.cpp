/*
A-2
Based on A-1, use the corrected functions from the previous question to
complete a simple cinema self-service ticketing program.
A cinema is developing a self-service ticket kiosk. The program should
allow a customer to enter a movie name, select a ticket type, enter the
number of tickets, make a payment, and receive a receipt.
Ticket Information
● 1 - Regular Ticket: $300
● 2 - Student Ticket: $250
Discount Rule
If the subtotal is $1000 or more, a 10% discount is applied.

Hints:
⮚ Reuse the corrected functions from A-1:
■ getValueByOption() → ticket price
■ calculateProduct() → subtotal
■ adjustValue() → final total
■ calculateDifference() → change
⮚ Display the final receipt with all purchase information.
Example:
Sample Input - 1
Odyssey
1
2
1000
Sample Output - 1
===== CINEMA TICKET KIOSK =====
1. Regular Ticket ($300)
2. Student Ticket ($250)
===== RECEIPT =====
Movie: Odyssey
Ticket Type: Regular
Quantity: 2
Subtotal: $600
Total: $600
Payment: $1000
Change: $400
Sample Input - 2
Avengers
2
4
1000
Sample Output - 2
===== CINEMA TICKET KIOSK =====
1. Regular Ticket ($300)
2. Student Ticket ($250)
===== RECEIPT =====
Movie: Avengers
Ticket Type: Student
Quantity: 4
Subtotal: $1000
Total: $900
Payment: $1000
Change: $100
*/

#include <iostream>
#include <string>
using namespace std;
// Paste the corrected functions from A-1 here.
int getValueByOption(int option)
{
    if (option == 2)
        return 250;
    else
        return 300;
}

int calculateProduct(int a, int b)
{
    return a * b;
}

int adjustValue(int value)
{
    if (value >= 1000)
        return value * 0.9;
    return value;
}

int calculateDifference(int a, int b)
{
    return a - b;
}
// END OF FUNCTIONS

int main()
{
    string movieName;
    string ticketName;
    int ticketType;
    int quantity;
    int price;
    int subtotal;
    int total;
    int payment;
    int change;
    cout << "===== CINEMA TICKET KIOSK =====" <<
    endl;
    cin >> movieName;
    cout << "1. Regular Ticket ($300)" << endl;
    cout << "2. Student Ticket ($250)" << endl;
    cin >> ticketType;
    cin >> quantity;
    cin >> payment;

    price = getValueByOption(ticketType);
    subtotal = calculateProduct(price, quantity);
    total = adjustValue(subtotal);
    change = calculateDifference(payment, total);

    // TODO 2:
    // Set ticketName to "Regular" or "Student".
    ticketName = (ticketType == 1) ? "Regular" : "Student";
    cout << endl;
    cout << "===== RECEIPT =====" << endl;
    cout << "Movie: " << movieName << endl;
    cout << "Ticket Type: " << ticketName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Total: $" << total << endl;
    cout << "Payment: $" << payment << endl;
    cout << "Change: $" << change << endl;
    return 0;
}
