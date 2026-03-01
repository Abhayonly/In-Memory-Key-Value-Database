#include "Database.h"

void Database::set(string key, string value) {
    store[key] = value;
    cout << "Key-Value pair stored successfully.\n";
}

string Database::get(string key) {
    if (store.find(key) != store.end()) {
        return store[key];
    }
    return "Key not found!";
}

void Database::del(string key) {
    if (store.find(key) != store.end()) {
        store.erase(key);
        cout << "Key deleted successfully.\n";
    } else {
        cout << "Key not found!\n";
    }
}

bool Database::exists(string key) {
    return store.find(key) != store.end();
}

void Database::displayAll() {
    cout << "\n--- Database Contents ---\n";
    for (auto &pair : store) {
        cout << pair.first << " : " << pair.second << endl;
    }
}
