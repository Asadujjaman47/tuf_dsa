/**
Stock Buy And Sell

Problem Statement: You are given an array of prices 
where prices[i] is the price of a given stock on an ith day.

You want to maximize your profit by choosing a single day 
to buy one stock and choosing a different day in the future to sell that stock. 
Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.

Examples
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are 
done and the max profit = 0.


Brute Force Approach:
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to calculate max profit using brute force
    int stockbuySell(vector<int>& prices) {
        // Initialize max profit to 0
        int maxProfit = 0;

        // Loop through each day as a potential buy day
        for(int i = 0; i < prices.size(); i++) {
            // Loop through each future day as a potential sell day
            for(int j = i + 1; j < prices.size(); j++) {
                // Calculate the profit
                int profit = prices[j] - prices[i];

                // Update max profit if this is higher
                maxProfit = max(maxProfit, profit);
            }
        }

        // Return the maximum profit
        return maxProfit;
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << sol.stockbuySell(prices) << endl;
    return 0;
}

// Time complexity: O(n^2)
// Space Complexity: O(1)