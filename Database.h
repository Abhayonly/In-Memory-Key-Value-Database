#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <unordered_map>
using namespace std;

class Database {
private:
    unordered_map<string, string> store;

public:
    void set(string key, string value);
    string get(string key);
    void del(string key);
    bool exists(string key);
    void displayAll();
};

#endif
