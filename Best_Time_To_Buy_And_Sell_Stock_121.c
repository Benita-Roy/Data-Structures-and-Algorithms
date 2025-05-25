//LEETCODE Question:121 Difficulty:Easy
/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

int maxProfit(int* prices, int n) {
    //keeping track of the global minimum price
    int min_price=prices[0];
    //keeping track of the global maximum profit
    int max_profit=0;

    //single pass algorithm i.e. in O(n) time
    for(int i=1;i<n;i++)
    {    
        //computing maximum possible profit an checking if it beats the global maximum profit 
        int profit = prices[i]-min_price;

        //if the profit is greater then update the max_profit 
        if(profit>max_profit)
        {
            max_profit=profit;
        }

        //update the global minimum price is current price of stock is lower
        if(prices[i]<min_price)
        {
            min_price=prices[i];
        }
    }

    return max_profit;
}
