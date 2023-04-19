# compprog

//
// Created by lichtenaue on 19.04.23.
//
//
// Created by lichtenaue on 19.04.23.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int length;
    int width;
    cin >> length >> width;

    int switched = 1;

    vector<vector<int>> matrix(length, vector<int>(width));

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            cin >> matrix[i][j];
        }
    }

    int indexLength = 0;
    int indexWidth = 0;

    int runningLength = length;
    int runningWidth = width;

    int cycles = getCycles(length, width);

    for (int i = 0; i < cycles; ++i) {
        for (indexLength = 0; indexLength < runningLength; ++indexLength) {
            cout << matrix[indexLength][indexWidth];
            runningLength--;
        }
        for (indexWidth = 0; indexWidth < runningWidth; indexWidth++) {
            cout << matrix[indexLength][indexWidth];
            runningWidth--;
        }
        for (index indexLength >= cycles; ++) {

        }
    }

}


static int getCycles(int length, int width) {

    if ( length/2%2 != 0) {
        length/2 + 1;
    }
    float halfOfLength =
}
