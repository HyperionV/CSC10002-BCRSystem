#include "_validate_.h"

int getChoiceInt() {
    int choice;
    while (true) {
        cin >> choice;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        if (cin.good()) {
            return choice;
        }
        cout << "Invalid choice!" << endl;
    }
}

char getChoiceChar() {
    char choice;
    while (true) {
        cin >> choice;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        if (cin.good()) {
            return choice;
        }
        cout << "Invalid choice" << endl;
    }
}