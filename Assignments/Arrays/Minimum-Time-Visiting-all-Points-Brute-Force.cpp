

#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(N * max distance) where n is the number of points
int minTimeToVisitAllPoints(vector<vector<int>> &points)
{
    int time = 0;

    for (int i = 0; i < points.size() - 1; ++i)
    {
        int x1 = points[i][0], y1 = points[i][1];
        int x2 = points[i + 1][0], y2 = points[i + 1][1];

        while (x1 != x2 || y1 != y2)
        {
            if (x1 < x2)
                x1++;
            else if (x1 > x2)
                x1--;

            if (y1 < y2)
                y1++;
            else if (y1 > y2)
                y1--;

            time++;
        }
    }

    return time;
}

int main()
{

    vector<vector<int>> a = {{1, 1}, {3, 4}, {-1, 0}};
    cout << minTimeToVisitAllPoints(a);

    /*
    Output:7
    */
}