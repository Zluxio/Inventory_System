#include <iostream>
#include <vector>
using namespace std;
#ifndef INVENTORY_SYSTEM_FUNCTIONS_H
#define INVENTORY_SYSTEM_FUNCTIONS_H



class Inventory {

    vector<string> item;
    vector<int> amount;

public:

    void add_item(string item_name, int quantity);
    void check_inventory();

private:



};


#endif //INVENTORY_SYSTEM_FUNCTIONS_H
