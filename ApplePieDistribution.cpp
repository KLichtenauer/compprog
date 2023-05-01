//
// Created by Kilian on 01/05/2023.
//
#include "iostream"
#include "queue"
#include "array"

struct HouseHold {
    int ponies, currentPonies;
    int pies = 1;

    HouseHold(int cp) {
        ponies = cp;
        currentPonies = cp;
    }

    bool operator<(const HouseHold& other) const {
        return currentPonies < other.currentPonies;
    }
};

int main() {

    using namespace std;

    int tests;
    cin >> tests;

    int result[tests];

    for (int i = 0; i < tests; ++i) {

        priority_queue<HouseHold> houseHolds;
        int h, p;

        cin >> h >> p;
        p -= h;

        for (int j = 0; j < h; ++j) {
            int ponies;
            cin >> ponies;
            houseHolds.emplace(ponies);
        }

        while (p > 0) {
            HouseHold top = houseHolds.top();

            top.currentPonies = top.ponies / (top.pies + 1);

            if (top.ponies % (top.pies + 1) == 1) {
                top.currentPonies += 1;
            }

            houseHolds.pop();
            houseHolds.emplace(top);

            p--;
        }

        result[i] = houseHolds.top().currentPonies;
    }

    for (int i = 0; i < tests; ++i) {
        cout << result[i] << endl;
    }

}