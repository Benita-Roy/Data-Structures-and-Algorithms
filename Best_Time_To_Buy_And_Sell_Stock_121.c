//LEETCODE
/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
int maxProfit(int* prices, int n) {
    int min_price=prices[0];
    int max_profit=0;

    for(int i=1;i<n;i++)
    {
        int profit = prices[i]-min_price;
        if(profit>max_profit)
        {
            max_profit=profit;
        }

        if(prices[i]<min_price)
        {
            min_price=prices[i];
        }
    }

    return max_profit;
}
