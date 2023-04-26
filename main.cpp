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
    sumWithOutLargestStack = sum - largestStack;


    if (sum % 2 != 0 || sumWithOutLargestStack < largestStack) {
        cout << "no";
    } else {
        cout << "yes" << endl;
        while (stacks.top().coins != 0) {
            coinStack stack1 = stacks.top();
            stacks.pop();
            coinStack stack2 = stacks.top();
            stacks.pop();

            stack1.coins = stack1.coins - 1;
            stacks.emplace(stack1);

            stack2.coins = stack2.coins - 1;
            stacks.emplace(stack2);

            cout << stack1.location << " " << stack2.location << endl;
        }
    }

    return 0;
}




