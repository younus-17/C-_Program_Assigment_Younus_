#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while(temp != 0){
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Sum of digits of " << num << " is " << sum << endl;
    return 0;
}
