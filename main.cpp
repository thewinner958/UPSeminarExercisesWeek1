#include <iostream>
#include <cmath>

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

    // Exercise 2
    int year, leap;
    cout << "Enter a year: ";
    cin >> year;
    if (!(year % 100)) {
        leap = year % 400;
    }
    else {
        leap = year % 4;
    }
    if (leap == 0) {
        cout << year << " is a leap year\n";
    }
    else {
        cout << year << " is not a leap year\n";
    }

    // Exercise 3
    double qdna, qdnb, qdnc;
    double qdex, qdex1, qdex2;
    cin >> qdna >> qdnb >> qdnc;
    double discriminant = pow(qdnb , 2) - 4 * qdna * qdnb;
    if (discriminant < 0) {
        cout << "No result\n";
    }
    else if (discriminant == 0) {
        qdex = -qdnb / 2 * qdna;
        cout << qdex;
    }
    else {
        qdex1 = (-qdnb + discriminant) / (2 * qdna);
        qdex2 = (-qdnb - discriminant) / (2 * qdna);
        cout << qdex1 << endl << qdex2 << endl;
    }
    return 0;
}
