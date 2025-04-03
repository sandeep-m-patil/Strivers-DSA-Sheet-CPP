#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Best time complexity: O(N)
// Space complexity: O(N) for the hash map
vector<int> twoSumOptimal(vector<int>& arr, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i}; // Found the pair
        }
        mp[arr[i]] = i; // Store current value and index
    }
    return {};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSumOptimal(arr, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}
