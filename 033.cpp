#include <iostream>
using namespace std;
int main() {
    int num, reversed = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversed)
        cout << originalNum << " is a palindrome." << endl;
    else
        cout << originalNum << " is not a palindrome." << endl;

    return 0;
}
