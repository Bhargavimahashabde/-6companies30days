Question:
4. Number of Unique Paths

Solution:
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a, vector<int>(b, 0));
        for (int i = 0; i < a; i++)
        {
            dp[i][0] = 1;
        }

        for (int i = 0; i < b; i++)
        {
            dp[0][i] = 1;
        }

        for (int i = 1; i < a; i++)
        {
            for (int j = 1; j < b; j++)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
        return dp[a - 1][b - 1];
    }
};

int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking dimensions of the matrix
        int a, b;
        cin >> a >> b;
        Solution ob;
        // calling NumberOfPath() function
        cout << ob.NumberOfPath(a, b) << endl;
    }
}

