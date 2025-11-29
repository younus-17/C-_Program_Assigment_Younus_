#include <iostream>
using namespace std;
int main() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter interest rate (per year): ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    double simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;
    return 0;
}
