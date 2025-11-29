#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter interest rate (per year): ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    double compound_interest = principal * pow((1 + rate / 100), time) - principal;
    cout << "Compound Interest: " << compound_interest << endl;
    return 0;
}
