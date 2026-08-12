#include <iostream>
using namespace std;

void maxProfit(int *prices, int n)
{
     int bestBuy[100000];
     bestBuy[0] = INT_MAX;

     for (int i = 1; i < n; i++)
     {
          bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
     }

     int maxProfit = 0;

     for (int i = 0; i < n; i++)
     {
          int currProfit = prices[i] - bestBuy[i];
          maxProfit = max(maxProfit, currProfit);
     }

     cout << maxProfit;
}

int main()
{
     int prices[] = {2, 4, 5, 3, 7, -2, 4, 8, -3};
     int n = sizeof(prices) / sizeof(int);
     maxProfit(prices, n);

     return 0;
}

/*
TC:- O(n + n) = O(2n) => O(n)
*/