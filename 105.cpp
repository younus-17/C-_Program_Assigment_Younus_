#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    double area = 3.14159 * radius * radius;
    cout << "Area of circle: " << area << endl;
    return 0;
}
