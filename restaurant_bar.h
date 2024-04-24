// Reg Number : 222013934
// Names : NISINGIZWE NIYIGENA NICOLE
// Date of Creation : April 23, 2024
//document name : restaurant_bar.h
// This piece of code is responsible of DECLARING the structure and the classes as well as their member variables and functions


#ifndef RESTAURANT_BAR_H
#define RESTAURANT_BAR_H

struct Amount {
    float total = 0;
};

class Restaurant {
private:
    float amount;

public:
    Restaurant(float amt);
    float getAmount();
    void setAmount(float amt);
};

class Bar {
private:
    float amount;
    int stock;

public:
    Bar(float amt, int initialStock);
    float getAmount();
    void setAmount(float amt);
    void displayStock();
    void decreaseStock(int amount);
};

#endif
