#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;

    // Step 1: Mark indices as visited
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;  // Convert value to index (1-based)
        nums[index] = -abs(nums[index]);  // Mark as negative
    }

    // Step 2: Collect missing numbers
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {  // Positive means missing
            result.push_back(i + 1);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = findDisappearedNumbers(nums);

    cout << "Missing Numbers: ";
    for (int num : result) cout << num << " ";
    return 0;
}
