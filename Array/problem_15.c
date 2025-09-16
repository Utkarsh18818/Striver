// Dynamic Programing  on Stocks .
// Best time to Buy or sell Stock .
#include <stdio.h>

int maxProfit(int prices[], int n) {
    int mini = prices[0];
    int max_profit = 0;

    for (int i = 0; i < n; i++) {
        int cost = prices[i] - mini;
        if (cost > max_profit)
            max_profit = cost;        // Time COmplexity - O(n)
        if (prices[i] < mini)
            mini = prices[i];
    }

    return max_profit;
}

int main() {
    int prices[] = {7, 1, 2, 3, 8, 6, 5, 4};     // Space COmplexity - O(1)
    int n = sizeof(prices) / sizeof(prices[0]);

    int profit = maxProfit(prices, n);
    printf("Maximum Profit: %d\n", profit);

    return 0;
}
// Total Time Complexity - O(n)
// Total Space Complexity - O(1)
