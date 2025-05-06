

#include<iostream>
using namespace std;

int KnapSack(int item, int capacity, int Weight[], int Price[]) {
    if (item == 0 || capacity == 0)
        return 0;

    if (Weight[item - 1] <= capacity) {
        int include = Price[item - 1] + KnapSack(item - 1, capacity - Weight[item - 1], Weight, Price);
        int exclude = KnapSack(item - 1, capacity, Weight, Price);
        return max(include, exclude);
    } else {
        return KnapSack(item - 1, capacity, Weight, Price);
    }
}

int main() {
    int n = 4; // number of items
    int capacity = 7;
    int Weight[] = {1, 3, 4, 5};
    int Price[] = {1, 4, 5, 7};

    int maxProfit = KnapSack(n, capacity, Weight, Price);
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
