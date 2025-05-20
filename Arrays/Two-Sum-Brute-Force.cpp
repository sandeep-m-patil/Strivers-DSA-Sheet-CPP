#include <iostream>
#include <vector>
using namespace std;

// Worst time complexity: O(N^2)
vector<int> twoSumBrute(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // Return empty if no solution
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSumBrute(arr, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}
