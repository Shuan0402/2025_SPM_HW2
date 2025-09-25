#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int stack[SIZE];
    int top = -1;
    int choice, value;

    cout << "Simple Stack Program\n";

    for (int i = 0; i < 3; i++) {
        cout << "Menu: 1=Push, 2=Pop, 3=Display\n";
        cin >> choice;

        if (choice == 1) {
            if (top == SIZE - 1) {
                cout << "Stack Overflow!\n";
            } else {
                cout << "Enter value: ";
                cin >> value;
                stack[++top] = value;
                cout << "Pushed " << value << endl;
            }
        } else if (choice == 2) {
            if (top == -1) {
                cout << "Stack Underflow!\n";
            } else {
                cout << "Popped " << stack[top--] << endl;
            }
        } else if (choice == 3) {
            if (top == -1) {
                cout << "Stack is empty.\n";
            } else {
                cout << "Stack contents: ";
                for (int j = 0; j <= top; j++) {
                    cout << stack[j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}