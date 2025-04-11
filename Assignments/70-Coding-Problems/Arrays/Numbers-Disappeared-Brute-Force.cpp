#include <iostream>
#include <vector>

using namespace std;

// Worst Time Complexity is O(n^2)
vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<int> missing_numbers;
    
    for (int i = 1; i <= n; i++) { // Iterate from 1 to n
        bool found = false;
        for (int j = 0; j < n; j++) { // Linear search in nums
            if (nums[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            missing_numbers.push_back(i);
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
