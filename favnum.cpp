#include <iostream>

using namespace std;

int main() {
    int fav_num;
    cout << "Enter your favorite number:";
    cin >> fav_num;
    cout << to_string(fav_num) + " is my favorite number too!" << endl;
    return 0;
}