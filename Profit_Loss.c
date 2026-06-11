#include <stdio.h>

int main() {
    int prices[] = {7, 10, 1, 3, 6, 9, 2};
    int n = 7;

    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < n; i++) {

        if(prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if(profit > maxProfit) {
            maxProfit = profit;
        }
    }

    printf("Maximum Profit = %d\n", maxProfit);

    return 0;
}