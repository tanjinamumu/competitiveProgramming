#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, oldSubstr, newSubstr;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter what you want to change: ";
    getline(cin, oldSubstr);
    cout << "Replace with: ";
    getline(cin, newSubstr);

    std::string::size_type pos = str.find(oldSubstr);
    while (pos != std::string::npos) {
        str.replace(pos, oldSubstr.length(), newSubstr);
        pos = str.find(oldSubstr, pos + newSubstr.length());
    }

    cout << "Modified string: " << str << endl;

    return 0;
}
