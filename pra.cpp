#include <iostream>
#include <string>
using namespace std;

class BOOK {
private:
    int bookNo;
    char bookTitle[21];
    float price;

public:
    void TOTAL_COST(int numCopies) {
        float totalCost = numCopies * price;
        cout << "Total Cost: $" << totalCost << endl;
    }

    void INPUT() {
        cout << "Enter Book Number: ";
        cin >> bookNo;
        cout << "Enter Book Title: ";
        cin.ignore(); // Ignore any previous newline character
        cin.getline(bookTitle, 21);
        cout << "Enter Price: $";
        cin >> price;
    }

};

int main() {
    BOOK book;
    book.INPUT();
    book.PURCHASE();

    return 0;
}
