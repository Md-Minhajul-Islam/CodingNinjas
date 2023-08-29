// Q: https://www.codingninjas.com/studio/problems/bellmon-ford_2041977?leftPanelTab=0
vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges)
{
    vector<int> dis(n + 1, 1e8);
    dis[src] = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0], v = edges[j][1], w = edges[j][2];
            if (dis[u] != 1e9 && dis[u] + w < dis[v])
                dis[v] = dis[u] + w;
        }
    return dis;
}