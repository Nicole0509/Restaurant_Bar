// Reg Number : 222013934
// Names : NISINGIZWE NIYIGENA NICOLE
// Date of Creation : April 23, 2024
//document name : restaurant_bar.cpp
// This piece of code is responsible of DEFINING the member variables and functions of both classes 


#include "restaurant_bar.h"
#include <iostream>

using namespace std;

Restaurant::Restaurant(float amt) {
    amount = amt;
}

float Restaurant::getAmount() {
    return amount;
}

void Restaurant::setAmount(float amt) {
    amount = amt;
}

Bar::Bar(float amt, int initialStock) {
    amount = amt;
    stock = initialStock;
}

float Bar::getAmount() {
    return amount;
}

void Bar::setAmount(float amt) {
    amount = amt;
}

void Bar::displayStock() {
    cout << "Current stock: " << stock << endl;
}

void Bar::decreaseStock(int amt) {
    if (stock >= amt) {
        stock -= amt;
        cout << "Stock decreased by " << amt << ". Remaining stock: " << stock << endl;
    } else {
        cout << "Insufficient stock!" << endl;
    }
}
