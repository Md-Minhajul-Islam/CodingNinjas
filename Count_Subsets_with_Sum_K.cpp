// Q: https://www.codingninjas.com/studio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&leftPanelTab=1
const int mod = 1e9 + 7;
int ans(int n, vector<int> &arr, int s, int dp[][1005])
{
    if (s == 0) return 1;
    if (n < 0) return 0;
    if (dp[n][s] != -1) return dp[n][s];
    if (s >= arr[n]) 
        return dp[n][s] = (ans(n - 1, arr, s - arr[n], dp) + ans(n - 1, arr, s, dp)) % mod;
    else
        return dp[n][s] = ans(n - 1, arr, s, dp) % mod;
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    int dp[1005][1005];
    memset(dp, -1, sizeof(dp));
    return ans(n - 1, arr, k, dp);
}
