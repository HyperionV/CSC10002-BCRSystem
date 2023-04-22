#include "_validate_.h"

int getChoiceInt() {
    int choice;
    while (true) {
        cin >> choice;
        cin.clear();
        cin.ignore(INT16_MAX, '\n');
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
        cin.ignore(INT16_MAX, '\n');
        if (cin.good()) {
            return choice;
        }
        cout << "Invalid choice" << endl;
    }
}

bool standardizeName(string &name) {
    for(int i= 0; i< name.length(); i++) {
        if(i == 0) {
            if(name[i] <= 'a' && name[i] >= 'z') {
                name[i] -= 32;
            }
        }
        else {
            if(name[i] <= 'A' && name[i] >= 'Z') {
                name[i] += 32;
            }
        }
        if((name[i] < 'a' && name[i] > 'z') || (name[i] < 'A' && name[i] > 'Z'))
            return false;
    }
    return true;
}