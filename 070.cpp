#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2;i*i<=n;i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    int lower, upper;
    cout << "Enter two numbers (lower and upper): ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << ": ";
    for(int i=lower;i<=upper;i++){
        if(isPrime(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}
