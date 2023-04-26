//
// Created by lichtenaue on 26.04.23.
//
//
// Created by lichtenaue on 26.04.23.
//

#include "iostream"
#include "stack"

int main() {
    using namespace std;

    int numberOfTests;
    cin >> numberOfTests;
    string line;

    for (int i = 0; i < numberOfTests; ++i) {
        cin >> line;
        int sum = 0;
        stack<int> stack;
        for (int j = 0; j < line.length(); ++j) {
            if (line[j] == '\\') {
                stack.push(j);
            }
            if (line[j] == '/' && !stack.empty()) {
                sum += j - stack.top();
                stack.pop();
            }
        }
        cout << sum << endl;
    }

}
