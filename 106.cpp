#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    double marks, sum = 0;
    for(int i=0;i<n;i++){
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> marks;
        sum += marks;
    }

    double average = sum / n;
    cout << "Average marks: " << average << endl;
    return 0;
}
