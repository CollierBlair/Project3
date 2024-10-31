#include <fstream>
#include <iostream>
#include <cstdlib> //for exit()
using namespace std;

int main() {
    ifstream inStream;
    string filename;
    int data;

    cout << "*** Welcome to Collier's Data Analyzer ***" << endl;

    cout << "Enter the file name: ";
    cin >> filename;
    cout << "entered filename is: " << filename << endl;

    if (filename == "input1.txt") {
        cout << "File found." << endl;
    } else {
        cout << "File not found." << endl;
        exit(1);
    }

    // Pass the file name as an array of chars to open()
    inStream.open(filename.c_str());
    if (inStream.fail()) {
        cout << "Input file opening failed." << endl;
        exit(1);
    }

    inStream >> data;
    while (!inStream.eof()) {
        cout << data << endl;
        inStream >> data;
    }

    inStream.close();
    return 0;
}

