#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;

void Inventory::check_inventory() {
    for(int i = 0; i < item.size();i++) {
        cout << "[" << i + 1 <<"] " << item[i] << ". Amount: " << amount[i] << "\n";
    }
}

void Inventory::add_item(std::string item_name, int quantity) {

    item.push_back(item_name);
    amount.push_back(quantity);

}
