#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Brute Force Approach
int majorityElementBruteForce(const vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            return nums[i];
        }
    }
    return -1;  // Return -1 if no majority element is found
}

// 2. Sorting Approach
int majorityElementSorting(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // Sort the array
    int candidate = nums[nums.size() / 2];  // Potential candidate for majority
    int count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }
    if (count > nums.size() / 2) {
        return candidate;
    }
    return -1;  // Return -1 if no majority element is found
}

// 3. Moore's Voting Algorithm
int majorityElementMoore(const vector<int>& nums) {
    int candidate = -1, count = 0;

    // Phase 1: Find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    }
    return -1;  // Return -1 if no majority element is found
}

int main() {
    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    // Test Brute Force Approach
    cout << "Majority Element (Brute Force): " << majorityElementBruteForce(nums) << endl;

    // Test Sorting Approach
    cout << "Majority Element (Sorting): " << majorityElementSorting(nums) << endl;

    // Test Moore's Voting Algorithm
    cout << "Majority Element (Moore's Voting): " << majorityElementMoore(nums) << endl;

    return 0;
}