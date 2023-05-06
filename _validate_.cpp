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

bool checkValidDate(string date)
{
    //Assuming date format is dd/mm/yyyy or d/m/yyyy or dd/m/yyyy or d/mm/yyyy => minLength == 8, maxLength == 10 
    if (date.length() < 8 || date.length() > 10)
    {
        cout << "Invalid date, please type date as dd/mm/yyyy\n";
        return false;
    }

    string dummy = "";

    if (date.find("/") > date.length())
    {
        if (date.find("-") > date.length())
        {
            cout << "No date seperation symbol is found or the symbol is incorrect ('/' and '-' )\n";
            return false;
        }
        dummy += "-";
    }
    else
        dummy += "/";

    //getting date 
    int d = stoi(date.substr(0, date.find(dummy)));
    int m = stoi(date.substr(date.find(dummy) + 1, date.find_last_of(dummy) - 1));
    int y = stoi(date.substr(date.find_last_of(dummy) + 1));

    //checking 
    if (d > 31 || d < 1)
    {
        cout << "Date is incorrect, value must be <= 31 or >= 1\n";
        return false;
    }

    if (m < 1 || m > 12)
    {
        cout << "Month is incorrect, value must be <= 12 or >= 1, you might have misplaced date and month's positions\nIn that case, the correct format is : DD/MM/YYYY\n";
        return false;
    }

    if (m == 2)
    {
        if (y % 4 != 0 || y % 100 == 0)
        {
            if (m > 28) 
            {
                cout << y << " is not a leap year, date cannot exceed 28\n";
                return false;
            }
        }
        else if (d > 29)
        {
            cout << "February is special, its date cannot exceed 29\n";
            return false;
        }
    }

    switch (m)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            if (d>30)
            {
            cout << "Date cannot exceed 30 with the current month\n";
            return false;
            }
    }

    return true;
}

void deleteSpacing(string& str)
{
    int count = 0;
    while (count < str.length())
    {
        if (str[count] == ' ') str.replace(count, 1, "");
        else count++;
    }
}