#include <iostream>
using namespace std;

class shop {
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void initcounter(void);
    void getprice(void);
    void setprice(void);
    void displayprice(void);
};

void shop::initcounter(void) {
    counter = 0;
}

void shop::getprice(void) {
    cout << "Enter ID of your item: ";
    cin >> itemid[counter];
    counter++;
}

void shop::setprice(void) {
    cout << "Enter price of item with ID "
         << itemid[counter - 1] << ": ";
    cin >> itemprice[counter - 1];
}

void shop::displayprice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The price of item with ID "
             << itemid[i]
             << " is "
             << itemprice[i]
             << endl;
    }
}

int main() {
    shop dukaan;

    dukaan.initcounter();

    dukaan.getprice();
    dukaan.setprice();

    dukaan.getprice();
    dukaan.setprice();

    dukaan.getprice();
    dukaan.setprice();

    dukaan.displayprice();

    return 0;
}

