//
// Created by lichtenaue on 26.04.23.
//
#include "stack"
#include "iostream"
#include "vector"


int main() {

    using namespace std;

    string string1;
    string inputChar;
    stack<char> stack;
    bool stringIsComing = true;
    bool flag = true;

    while (cin >> string1) {
        inputChar += string1;
    }



    for (int i = 0; (i < inputChar.length()) && flag; ++i) {
        if (inputChar[i] == '"') {
            stringIsComing = !stringIsComing;
            if (stringIsComing) {
                continue;
            }
        }
        if (stringIsComing) {

            if (inputChar[i] == ')' || inputChar[i] == ']' || inputChar[i] == '>' || inputChar[i] == '}') {
                char currentTop = stack.top();
                if ((currentTop == '(' && inputChar[i] == ')') || (currentTop == '[' && inputChar[i] == ']') ||
                        (currentTop == '<' && inputChar[i] == '>') || (currentTop == '{' && inputChar[i] == '}')) {
                    stack.pop();
                } else {
                    cout << "incorrect" << endl;
                    flag = false;
                }
            } else if (inputChar[i] == '(' || inputChar[i] == '[' || inputChar[i] == '<' || inputChar[i] == '{') {
                stack.push(inputChar[i]);
            }
        }
    }

    if (!stack.empty() && flag)  {
        cout << "incorrect" << endl;
    } else {
        if (flag) {
            cout << "correct" << endl;
        }
    }


}