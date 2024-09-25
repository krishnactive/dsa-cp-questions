const int M = 1e9 + 7;
#include <numeric>
void dfs(int vertex, int par, vector<int> gr[], vector<int> val, vector<int>& sum_subtree)
{
    sum_subtree[vertex] = val[vertex-1];
    for (auto child : gr[vertex])
    {
        if (child == par)
            continue;

        dfs(child, vertex, gr, val, sum_subtree);
        sum_subtree[vertex] += sum_subtree[child];
    }
}


int Solution::deleteEdge(vector<int>& A, vector<vector<int>>& B)
{
    int n = A.size();

    vector<int> gr[n + 1];              // Increase the size of gr to n+1
    vector<int> sum_subtree(n + 1, 0);  // Increase the size of sum_subtree to n+1
    for (auto edge : B)
    {
        gr[edge[0]].push_back(edge[1]);
        gr[edge[1]].push_back(edge[0]);
    }

    dfs(1, 0, gr, A, sum_subtree);  

    long long total_sum = accumulate(A.begin(), A.end(), 0LL);  
    long long mx = 0;
    for (int i = 2; i <= n; i++)     
    {
        long long sub1 = sum_subtree[i];
        long long sub2 = total_sum - sub1;
        mx = max(mx, (sub1 * sub2) % M);
    }

    return mx%M;
}   