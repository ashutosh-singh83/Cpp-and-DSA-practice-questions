#include <iostream>
#include <vector>
using namespace std;
int findMinimumCoins(int coins[], int &value, int n)
{
    int i = n - 1;
    int minCoins = 0;
    vector<int> ans;
    while (i >= 0 && value != 0)
    {

        if (coins[i] <= value)
        {
            value -= coins[i];
            minCoins++;
            ans.push_back(coins[i]);
        }
        else
        {
            i--;
        }
    }
    cout << "The combination of coins are:";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return minCoins;
}
int main()
{
    int n = 9;
    int coins[n] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    cout << "Enter any value:";
    int value;
    cin >> value;
    int numberOfCoins = findMinimumCoins(coins, value, n);
    cout << "The minimum number of coins are:";
    cout << numberOfCoins << endl;
    return 0;
}