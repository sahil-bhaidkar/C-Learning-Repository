# Time Complexity and Space Complexity

In computer science, **Time Complexity** and **Space Complexity** are two important aspects of algorithm analysis that help evaluate the efficiency of algorithms in terms of time and memory usage.

## 1. Time Complexity

Time complexity refers to the amount of time an algorithm takes to run, relative to the size of the input. It is usually expressed as a function of the input size `n`. The purpose of analyzing time complexity is to understand how the execution time of an algorithm grows as the input size increases.

### Common Time Complexities

Here are some common time complexities that you will encounter:

- **O(1)**: Constant time complexity. The execution time does not depend on the input size.

  ![O(1) Example](https://upload.wikimedia.org/wikipedia/commons/6/6c/Big_O_Notation_1.svg)

  - Example: Accessing an element in an array by index.

- **O(log n)**: Logarithmic time complexity. The execution time grows logarithmically as the input size increases.

  ![O(log n) Example](https://upload.wikimedia.org/wikipedia/commons/a/a5/Big_O_Log_n.svg)

  - Example: Binary Search in a sorted array.

- **O(n)**: Linear time complexity. The execution time grows linearly with the size of the input.

  ![O(n) Example](https://upload.wikimedia.org/wikipedia/commons/4/4f/Big_O_linear.svg)

  - Example: Traversing through an array.

- **O(n log n)**: Linearithmic time complexity. Common in algorithms that divide the problem in half and process both halves.

  ![O(n log n) Example](https://upload.wikimedia.org/wikipedia/commons/9/98/Big_O_nlogn.svg)

  - Example: Merge Sort, Quick Sort.

- **O(n^2)**: Quadratic time complexity. The execution time grows quadratically with the size of the input.

  ![O(n^2) Example](https://upload.wikimedia.org/wikipedia/commons/2/26/Big_O_quadratic.svg)

  - Example: Bubble Sort, Insertion Sort.

- **O(2^n)**: Exponential time complexity. The execution time grows exponentially with the size of the input.

  ![O(2^n) Example](https://upload.wikimedia.org/wikipedia/commons/1/17/Big_O_exponential.svg)

  - Example: Solving the Travelling Salesman Problem via brute force.

- **O(n!)**: Factorial time complexity. The execution time grows factorially with the size of the input.

  ![O(n!) Example](https://upload.wikimedia.org/wikipedia/commons/e/e5/Big_O_factorial.svg)

  - Example: Generating all permutations of a set.

### How to Analyze Time Complexity?

To determine the time complexity of an algorithm:
1. Identify the input size, typically represented as `n`.
2. Count the number of basic operations (such as comparisons, assignments, etc.) performed as a function of `n`.
3. Use Big O notation to describe the growth rate of the algorithm's running time.

## 2. Space Complexity

Space complexity refers to the amount of memory an algorithm uses, relative to the size of the input. It evaluates how much extra memory is required to execute an algorithm, including memory for variables, data structures, and function calls.

### Common Space Complexities

- **O(1)**: Constant space complexity. The algorithm uses a fixed amount of memory regardless of the input size.

  - Example: Swapping two variables.

- **O(n)**: Linear space complexity. The memory usage grows linearly with the size of the input.

  - Example: Storing an array of size `n`.

- **O(n^2)**: Quadratic space complexity. The memory usage grows quadratically with the size of the input.

  - Example: A 2D matrix of size `n x n`.

### How to Analyze Space Complexity?

To determine the space complexity of an algorithm:
1. Identify all the variables, arrays, and data structures used by the algorithm.
2. Determine the amount of space each data structure consumes based on the input size.
3. Express the space complexity using Big O notation to describe the algorithm's memory usage.

## 3. Big O Notation

Big O notation is used to express the time or space complexity of an algorithm in a simplified manner. It focuses on the highest-order term of the complexity and disregards constants and lower-order terms. For example:

- **O(2n)** and **O(n)** both simplify to **O(n)**.
- **O(n^2 + n)** simplifies to **O(n^2)**.

Big O notation helps in comparing algorithms in terms of how they scale with increasing input size.

## 4. Example

Let’s consider a C++ algorithm that loops through an array and then performs another loop:

```cpp
#include <iostream>
#include <vector>

void example(std::vector<int>& arr) {
    int n = arr.size();
    
    // Outer loop (O(n))
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
    
    // Inner loop (O(n))
    for (int j = 0; j < n; j++) {
        std::cout << arr[j] << " ";
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    example(arr);
    return 0;
}
