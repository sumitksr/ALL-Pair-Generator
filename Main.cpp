#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int index) {
    // Base case
    if (index == nums.size()) {
        ans.push_back(output);
        return;
    }
    // Exclude the current element
    solve(nums, ans, output, index + 1);
    
    // Include the current element
    output.push_back(nums[index]);
    solve(nums, ans, output, index + 1);
}

int main() {
    vector<vector<int>> ans;
    vector<int> output;
    vector<int> nums;
    int size;

    cout << "Size of array: ";
    cin >> size;

    cout << "Input Array: ";
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    solve(nums, ans, output, 0);

    // Display subsets
    for (const auto &subset : ans) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i != subset.size() - 1) {
                cout << " ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
