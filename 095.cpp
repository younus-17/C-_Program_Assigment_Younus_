#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream source("source.txt");
    ofstream dest("destination.txt");

    if(source.is_open() && dest.is_open()){
        while(getline(source, line)){
            dest << line << endl;
        }
        source.close();
        dest.close();
        cout << "File copied successfully." << endl;
    } else {
        cout << "Error opening files." << endl;
    }

    return 0;
}
