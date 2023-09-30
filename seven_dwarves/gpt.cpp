#include <iostream>
#include <vector>

using namespace std;

// Define a type for storing combinations
using Combinations = vector<vector<int>>;

void generateCombinations(vector<int>& nums, vector<int>& combination, int index, int k, Combinations& result) {
    if (k == 0) {
        // Store the current combination in 'result'
        result.push_back(combination);
        return;
    }

    if (index == nums.size()) {
        return; // Reached the end of the input vector
    }

    // Include the current element in the combination
    combination.push_back(nums[index]);
    generateCombinations(nums, combination, index + 1, k - 1, result);

    // Exclude the current element from the combination
    combination.pop_back();
    generateCombinations(nums, combination, index + 1, k, result);
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int k = 2; // Change 'k' to the desired number of combinations

    vector<int> combination;
    Combinations result; // Container to store combinations

    generateCombinations(nums, combination, 0, k, result);

    // Now 'result' contains all combinations
    for (const auto& comb : result) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
 