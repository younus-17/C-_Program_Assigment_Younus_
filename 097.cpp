#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file1("file1.txt");
    ofstream file2("file2.txt", ios::app);
    string line;

    if(file1.is_open() && file2.is_open()){
        while(getline(file1, line)){
            file2 << line << endl;
        }
        file1.close();
        file2.close();
        cout << "Content appended successfully." << endl;
    } else {
        cout << "Error opening files." << endl;
    }

    return 0;
}
