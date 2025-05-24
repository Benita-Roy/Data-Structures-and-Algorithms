int maxProfit(int* prices, int n) {
    int max_profit=0;
    for(int i=0;i<n;i++)
    {
        int profit;
        for(int j=i+1;j<n;j++)
        {
            profit=prices[j]-prices[i];
            if(profit>max_profit)
            {
                max_profit=profit;
            }
        }
    }

    return max_profit;
}