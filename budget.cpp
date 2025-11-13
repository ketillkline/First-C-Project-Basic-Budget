#include <iostream>
#include "budget.h"

Budget::Budget(int starting_amount){
    amount = starting_amount;
    
    
};

void Budget::add_money(int value){
    amount += value;    
};

void Budget::use_money(int value){
    amount -= value;
};

void Budget::display_money() const{
    std::cout << "You have $" << amount << " remaining." << std::endl;  
};