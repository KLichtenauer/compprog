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
    int sum = 0;
    int sumWithOutLargestStack = 0;
    int largestStack;
    priority_queue<coinStack> stacks;
    priority_queue<coinStack> stacksCopy;


    cin >> numberOfStacks;

    for (int i = 0; i < numberOfStacks; ++i) {
        int numberOfCoins;
        cin >> numberOfCoins;
        sum += numberOfCoins;
        stacks.emplace(i + 1, numberOfCoins);
    }


    largestStack = stacks.top().coins;
    sumWithOutLargestStack = largestStack - stacks.top().coins;

    stacksCopy.emplace(stacks.top());
    stacks.pop();

    for (int i = 0; i < numberOfStacks; ++i) {
        if (i != 0) {
            sumWithOutLargestStack = sumWithOutLargestStack + stacks.top().coins;
            stacksCopy.push(stacks.top());
            stacks.pop();
        }
    }

    if (sumWithOutLargestStack % 2 == 0 || largestStack > sumWithOutLargestStack) {
        cout << "no";
    } else {
        cout << "yes" << endl;
        while (stacksCopy.top().coins != 0) {
            coinStack stack1 = stacksCopy.top();
            stacksCopy.pop();
            coinStack stack2 = stacksCopy.top();
            stacksCopy.pop();

            stack1.coins = stack1.coins - 1;
            stacksCopy.emplace(stack1);

            stack2.coins = stack2.coins - 1;
            stacksCopy.emplace(stack2);

            cout << stack1.location << " " << stack2.location << endl;
        }
    }

    return 0;
}




