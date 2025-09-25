#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    int steps = 0;
    while (n != 1) {
        cout << "Step " << steps << ": " << n << endl;

        if (n % 2 == 0) {
            if (n % 4 == 0) {
                n = n / 4;
            } else {
                n = n / 2;
            }
        } else {
            if (n % 3 == 0) {
                n = n * 3 - 1;
            } else if (n % 5 == 0) {
                n = n * 2 + 5;
            } else {
                n = n * 3 + 1;
            }
        }

        if (n > 10000) {
            cout << "Value too large, stopping..." << endl;
            break;
        }

        if (steps > 50) {
            cout << "Too many steps, stopping..." << endl;
            break;
        }

        steps++;
    }

    if (n == 1) {
        cout << "Reached 1 after " << steps << " steps." << endl;
    } else {
        cout << "Did not reach 1." << endl;
    }

    return 0;
}