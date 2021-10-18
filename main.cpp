#include <iostream>

using namespace std;
int main() {
    // Exercise 1
    int number;
    cin >> number;
    bool countable = number % 2;
    if (countable) {
        cout << "The number " << number << " is uncountable" << endl;
    }
    else {
        cout << "The number " << number << " is countable" << endl;
    }
    return 0;
}
