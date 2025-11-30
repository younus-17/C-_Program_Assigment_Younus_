#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int smallest = a;
    if(b < smallest) smallest = b;
    if(c < smallest) smallest = c;

    cout << "Smallest number: " << smallest << endl;
    return 0;
}
