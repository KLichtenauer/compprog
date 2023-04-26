//
// Created by Kilian on 26.04.2023.
//
#include <iostream>

int main() {

    using namespace std;

    string input;

    cout << "? insert 42" << endl << "? insert 42" << endl << "? insert 66" << endl << "? insert 1" << endl << "? remove" << endl;
    cin >> input;

    if (input == "42") {
        cout << "! queue" << endl;
    } else if (input == "66") {
        cout << "! heap" << endl;
    } else if (input == "1") {
        cout << "? remove" << endl;
        cin >> input;
        if (input == "66") {
            cout << "! stack" << endl;
        } else if (input == "42") {
            cout << "?  remove" << endl;
            cin >> input;
            if (input == "42") {
                cout << "! pq" << endl;
            } else if (input == "66") {
                cout << "! set" << endl;
            }
        }
    }
    return 0;
}
