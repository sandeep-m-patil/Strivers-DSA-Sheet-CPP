#include <iostream>
#include <vector>
using namespace std;

// Worst Time Complexity: O(M * N) where M is the number of rows and N is the number of columns in the grid
// Space Complexity:  O(M * N) where M is the number of rows and N is the number of columns in the grid

void dfs(vector<vector<char>> &grid, int i, int j)
{

    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
        return;

    grid[i][j] = '0';

    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}

int numIslands(vector<vector<char>> &grid)
{
    if (grid.empty())
    {
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                dfs(grid, i, j);
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}};

    cout << "Number of islands: " << numIslands(grid) << endl; // Output: 1
    return 0;

    /*
    Output:
    Number of islands: 1
    */
}
