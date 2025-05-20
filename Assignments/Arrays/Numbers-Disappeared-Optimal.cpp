#include <iostream>
#include <vector>

using namespace std;

// Best Time Complexity is O(n)
vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Marking phase
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;  // Convert value to index
        if (nums[index] > 0) {
            nums[index] = -nums[index];  // Mark as visited
        }
    }

    // Step 2: Collect missing numbers
    vector<int> missing_numbers;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {  // Unmarked indices correspond to missing numbers
            missing_numbers.push_back(i + 1);
        }
    }

    return missing_numbers;
}

// Driver Code
int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> missing = findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for (int num : missing) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

    /*
    Ouput:
    Missing numbers: 5 6 
    */
}
