// Q: https://www.codingninjas.com/studio/problems/print-longest-common-subsequence_8416383?leftPanelTab=1
string findLCS(int n, int m, string &s1, string &s2)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= m; i++) dp[0][i] = 0;
    for (int i = 0; i <= n; i++) dp[i][0] = 0;
    int r, c, mxmm = -1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (dp[i][j] > mxmm)
            {
                mxmm = dp[i][j];
                r = i, c = j;
            }
        }
    string s = "";
    while (r > 0 && c > 0)
    {
        if (s1[r - 1] == s2[c - 1])
        {
            s += s1[r - 1];
            --r, --c;
        }
        else
        {
            if (dp[r - 1][c] > dp[r][c - 1]) --r;
            else --c;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}