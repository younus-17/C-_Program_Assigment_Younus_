#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sum += t1; // even index
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << "Sum of Fibonacci numbers at even indexes: " << sum << endl;
    return 0;
}
