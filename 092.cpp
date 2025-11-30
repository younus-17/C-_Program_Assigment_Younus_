#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex num1, num2, sum;
    cout << "Enter first complex number (real imag): ";
    cin >> num1.real >> num1.imag;
    cout << "Enter second complex number (real imag): ";
    cin >> num2.real >> num2.imag;

    sum = addComplex(num1, num2);

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
    return 0;
}

