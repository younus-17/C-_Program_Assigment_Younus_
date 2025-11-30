#include <iostream>
using namespace std;

int main() {
    int totalDays;
    cout << "Enter total days: ";
    cin >> totalDays;

    int years = totalDays / 365;
    int weeks = (totalDays % 365) / 7;
    int days = (totalDays % 365) % 7;

    cout << totalDays << " days = " << years << " years, " << weeks << " weeks, " << days <<
" days" << endl;
    return 0;
}

