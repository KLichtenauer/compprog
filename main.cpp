#include <iostream>
#include "queue"

struct coinStack {
    int location;
    int coins;

    coinStack(int loc, int coin) {
        location = loc;
        coins = coin;
    }

    bool operator<(const coinStack& other) const {
        return coins < other.coins;
    }
};

int main() {

    using namespace std;

    int numberOfStacks;
    int sum;
    int sumWithOutLargestStack = 0;
    int largestStack;
    priority_queue<coinStack> stacks;
    priority_queue<coinStack> stacksCopy;


    cin >> numberOfStacks;

    for (int i = 0; i < numberOfStacks; ++i) {
        int numberOfCoins;
        cin >> numberOfCoins;
        sum += numberOfCoins;
        stacks.push(coinStack(numberOfStacks, numberOfCoins));
    }

    stacksCopy;
    largestStack = stacks.top().coins;



    for (int i = 0; i < numberOfStacks; ++i) {
        if (i != 0) {
            sumWithOutLargestStack = sumWithOutLargestStack + stacks.top().coins;
            stacksCopy.push(stacks.top());
            stacks.pop();
        }
    }

    if (sum % 2 == 0 || largestStack > sumWithOutLargestStack) {
        cout << "no";
    } else {

    }

    return 0;
}




