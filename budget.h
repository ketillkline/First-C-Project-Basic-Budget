#ifndef BUDGET_H
#define BUDGET_H

class Budget{
    public:
        Budget(int starting_amount);
        
        void add_money(int value);
        void use_money(int value);
        void display_money() const;
        
    private:
        int amount;
};

#endif