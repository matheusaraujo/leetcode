int maxProfit(int* prices, int pricesSize) {
    int b = prices[0], p = 0;
    for(int i = 0; i < pricesSize; i++) {
        if (b > prices[i])
            b = prices[i];
        else if (prices[i] - b > p)
            p = prices[i] - b;
    }
    return p;
}
