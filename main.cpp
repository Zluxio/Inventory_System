#include <iostream>
#include "functions.h"
using namespace std;



int main() {
    Inventory jaden;

    jaden.add_item("wallet", 1);
    jaden.add_item("Pistol", 1);
    jaden.add_item("ammo", 100);
    jaden.check_inventory();
}
