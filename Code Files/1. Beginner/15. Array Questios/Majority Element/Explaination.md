Here's the content for a Markdown (.md) file that explains each of the three algorithms for finding the majority element:

---

# Majority Element Algorithms

This document explains three different algorithms for solving the **Majority Element** problem in an array of integers. The majority element is the element that appears more than `⌊n / 2⌋` times in the array, where `n` is the size of the array.

## Table of Contents

- [Brute Force Approach](#brute-force-approach)
- [Sorting Approach](#sorting-approach)
- [Moore's Voting Algorithm](#moores-voting-algorithm)

---

## Brute Force Approach

### Explanation:
The brute force approach checks every element in the array and counts how many times it appears in the array. If any element appears more than `⌊n / 2⌋` times, it is considered the majority element.

### Steps:
1. For each element in the array, count its occurrences in the array.
2. If any element's count is greater than `n / 2`, return that element as the majority element.
3. If no element meets this condition, return `-1` or an indicator that there is no majority element.

### Time Complexity:
- **O(n²)**: For each element, we count its occurrences (which takes O(n) time).
  
### Space Complexity:
- **O(1)**: No extra space is used except for temporary variables.

### C++ Code:
```cpp
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
```

---

## Sorting Approach

### Explanation:
The sorting approach involves sorting the array and then checking the element at the middle index of the sorted array. The majority element, if it exists, will always be located in the middle after sorting, because it will appear more than half the time.

### Steps:
1. Sort the array.
2. After sorting, the majority element will always appear at the middle index.
3. Count how many times this element appears in the array.
4. If the count exceeds `n / 2`, return the element as the majority.
5. If no element meets this condition, return `-1`.

### Time Complexity:
- **O(n log n)**: Sorting the array takes O(n log n) time.
  
### Space Complexity:
- **O(1)**: The space complexity is constant if the sorting is done in place (e.g., using the `sort` function).

### C++ Code:
```cpp
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
```

---

## Moore's Voting Algorithm

### Explanation:
Moore's Voting Algorithm is an efficient solution for finding the majority element in an array. The algorithm works by maintaining a **candidate** and a **count**. The idea is that if a majority element exists, it will be the only one that can "survive" after all the pairwise elimination during the traversal of the array.

### Steps:
1. **Phase 1**: Traverse the array and use the candidate and count to determine the potential majority element.
   - If the count is 0, set the current element as the new candidate and reset the count to 1.
   - If the current element matches the candidate, increment the count.
   - Otherwise, decrement the count.
2. **Phase 2**: After identifying the candidate, traverse the array again to verify that it appears more than `n / 2` times.
3. If the candidate meets the condition, return it as the majority element. Otherwise, return `-1`.

### Time Complexity:
- **O(n)**: We make two passes over the array — one for finding the candidate and one for verifying it.

### Space Complexity:
- **O(1)**: Only a few variables are used.

### C++ Code:
```cpp
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
```

---

## Comparison of Approaches

| Approach                 | Time Complexity | Space Complexity | Notes                                                   |
|--------------------------|-----------------|------------------|---------------------------------------------------------|
| **Brute Force**           | O(n²)           | O(1)             | Simple but inefficient for large arrays.                |
| **Sorting**               | O(n log n)      | O(1) or O(n)     | Sorts the array and checks the middle element.          |
| **Moore's Voting Algorithm** | O(n)           | O(1)             | Optimal solution with linear time and constant space.    |

---

## Conclusion

- **Brute Force** is simple but inefficient, with quadratic time complexity.
- **Sorting** is a good middle-ground approach but requires sorting the array, which takes **O(n log n)** time.
- **Moore's Voting Algorithm** is the most efficient approach, with linear time complexity and constant space complexity. It is the best choice when dealing with large arrays.

