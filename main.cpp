// Reg Number : 222013934
// Names : NISINGIZWE NIYIGENA NICOLE
// Date of Creation : April 23, 2024
// This piece of code is responsible of TESTING the codes in restaurant_bar.cpp by including the header file
//document name : main.cpp

// The program creates Restaurant and Bar classes, sets their amounts and calculates the total amount
// this total is stored in total variable which belongs to the structure afterwhich it is displayed, 
//and also manages the stock of the bar.

#include <iostream>
#include "restaurant_bar.h"

using namespace std;

int main() {
    Restaurant restaurant(100.0);
    Bar bar(50.0, 100);

    restaurant.setAmount(150.0);
    bar.setAmount(75.0);

    Amount totalAmount;
    totalAmount.total = restaurant.getAmount() + bar.getAmount();
    cout << "Total amount: $" << totalAmount.total << endl;

    bar.displayStock();
    bar.decreaseStock(20);
    bar.decreaseStock(100);
    bar.decreaseStock(30);

    return 0;
}

