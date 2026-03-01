#include "Database.h"

int main() {
    Database db;
    int choice;
    string key, value;

    do {
        cout << "\n--- In-Memory Key-Value Database ---\n";
        cout << "1. SET Key\n";
        cout << "2. GET Key\n";
        cout << "3. DELETE Key\n";
        cout << "4. EXISTS Key\n";
        cout << "5. DISPLAY All\n";
        cout << "6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter key: ";
            cin >> key;
            cout << "Enter value: ";
            cin >> value;
            db.set(key, value);
            break;

        case 2:
            cout << "Enter key: ";
            cin >> key;
            cout << "Value: " << db.get(key) << endl;
            break;

        case 3:
            cout << "Enter key: ";
            cin >> key;
            db.del(key);
            break;

        case 4:
            cout << "Enter key: ";
            cin >> key;
            if (db.exists(key))
                cout << "Key exists.\n";
            else
                cout << "Key does not exist.\n";
            break;

        case 5:
            db.displayAll();
            break;

        case 6:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
