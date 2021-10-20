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

    // Exercise 4
    double x, y;
    char oper;
    double result = 0;
    cin >> x >> oper >> y;
    switch (oper) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (x == 0 || y == 0) {
                cout << "You can't divide by 0\n";
                return 0;
            }
            result = x / y;
            break;
        default:
            break;
    }
    cout << result << endl;

    // Exercise 5
    char letter;
    cin >> letter;
    if (letter >= 65 && letter <= 90) {
        letter += 32;
        cout << "The lower case character corresponding to is " << letter << endl;
    }
    else if (letter >= 97 && letter <= 122) {
        letter -= 32;
        cout << "The upper case character corresponding to is " << letter << endl;
    } else {
        cout << letter << " is not a letter\n";
    }

    // Exercise 6
    char ltrnum;
    cin >> ltrnum;
    if (ltrnum >= 65 && ltrnum <= 90) {
        ltrnum += 32;
        cout << ltrnum << endl;
    }
    else if (ltrnum >= 97 && ltrnum <= 122) {
        ltrnum -= 32;
        cout << ltrnum << endl;
    } else if (ltrnum >= '0' && ltrnum <= '9'){
        double num = ltrnum - '0';
        num = pow(num, 2);
        cout << num << endl;
    }

    // Exercise 7
    double glue, slats, paint;
    double minGlue = 10;
    double minSlats = 4;
    double minPaint = 20;
    double endProducts = 0;
    cin >> glue >> slats >> paint;
    while (glue >= minGlue && slats >= minSlats && paint >= minPaint) {
        glue -= minGlue;
        slats -= minSlats;
        paint -= minPaint;
        endProducts += 1;
    }
    bool kidToy = glue >= 3 && slats >= 2 && glue >= 7;
    cout << "We can make " << endProducts << " end products\n";
    if (kidToy) {
        cout << "We can also make a kid's toy\n";
    }
    return 0;
}
