//
// Created by Kilian on 26.04.2023.
//
#include <iostream>

int main() {

    using namespace std;

    string input;

    cout << "? insert 42\n? insert 42\n? insert 1 \n? remove" << endl;
    cin >> input;


    if (input == "42") {
        cout << "! queue";
    } else if (input == "66") {
        cout << "! heap";
    } else if (input == "1") {
        cout << "? remove" << endl;
        cin >> input;

        if (input == "66") {
            cout << "! stack" << endl;
        } else if (input == "42") {
            cout << "?  remove" << endl;
            cin >> input;
            if (input == "42") {
                cout << "! qp";
            } else if (input == "66") {
                cout << "! set" << endl;
            } else {
                cout << "-1" << endl;
            }
        } else {
            cout << "-1" << endl;
        }
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
