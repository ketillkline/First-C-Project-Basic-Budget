#include "budget.h"
#include <iostream>

Budget::Budget(int starting_amount){
    amount = starting_amount;
};

void Budget::add_money(int value){
    amount+=value;
};

void Budget::use_money(int value){
    if (value > amount){
        std::cout << "ERROR: Insufficient Funds." << std::endl;
        return;
    }
    amount -= value;
};

void Budget::display_money() const{
  std::cout << "Current Amount: " << amount << std::endl;  
};
