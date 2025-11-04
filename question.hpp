#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string question(const string& message, const string& continueMsg) {
    while (true) {
        cout << message;
        string input;
        std::getline(cin, input);
        input.erase(0, input.find_first_not_of(" \t\n\r\f\v"));
        input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);
        if (!input.empty()) {
            return input;
        } else {
            cout << continueMsg << "\n";
        }
    }
}
