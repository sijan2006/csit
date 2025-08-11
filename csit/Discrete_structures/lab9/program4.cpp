// Implement the Travelling Salesman Problem for small graphs using brute force.
#include <iostream>
using namespace std;

int n;
int dist[10][10];
int dp[1024][10];
const int INF = 1000000000;

int tsp(int mask, int pos)
{
    if (mask == (1 << n) - 1)
        return dist[pos][0];
    if (dp[mask][pos] != -1)
        return dp[mask][pos];
    int ans = INF;
    for (int city = 0; city < n; city++)
    {
        if ((mask & (1 << city)) == 0)
        {
            int newAns = dist[pos][city] + tsp(mask | (1 << city), city);
            if (newAns < ans)
                ans = newAns;
        }
    }
    return dp[mask][pos] = ans;
}

int main()
{
    cout << "Enter number of cities (max 10): ";
    cin >> n;
    cout << "Enter distance matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> dist[i][j];
    for (int i = 0; i < (1 << n); i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;
    cout << "Minimum cost of travelling salesman tour: " << tsp(1, 0) << endl;
    return 0;
}
