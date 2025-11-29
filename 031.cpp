#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, originalNum, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
