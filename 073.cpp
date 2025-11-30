#include <iostream>
using namespace std;

int sumNatural(int n) {
    if(n == 0) return 0;
    return n + sumNatural(n-1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers is " << sumNatural(n) << endl;
    return 0;
}
