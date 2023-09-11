# Big O Notation Cheatsheet

Big O notation is used to describe the upper bound of the time and space complexity of an algorithm. It helps us analyze how an algorithm's performance scales as input size increases.

## Time Complexity

### O(1) - Constant Time
- The algorithm takes a constant amount of time regardless of input size.
- Example: Accessing an element in an array by index.

### O(log n) - Logarithmic Time
- The algorithm's time grows logarithmically with input size.
- Example: Binary search in a sorted array.

### O(n) - Linear Time
- The algorithm's time increases linearly with input size.
- Example: Linear search in an unsorted array.

### O(n log n) - Linearithmic Time
- The algorithm's time grows linearly but with a logarithmic factor.
- Example: Merge Sort, Quick Sort.

### O(n^2) - Quadratic Time
- The algorithm's time grows with the square of the input size.
- Example: Nested loops.

### O(n^k) - Polynomial Time
- The algorithm's time grows with a power of n, where k is a constant.
- Example: Matrix multiplication.

### O(2^n) - Exponential Time
- The algorithm's time doubles with each increase in input size.
- Example: Recursive algorithms without memoization.

### O(n!) - Factorial Time
- The algorithm's time grows with the factorial of the input size.
- Example: Permutations and combinatorial problems.

## Space Complexity

### O(1) - Constant Space
- The algorithm uses a constant amount of memory, regardless of input size.
- Example: Variables, simple data structures.

### O(n) - Linear Space
- The algorithm's memory usage grows linearly with input size.
- Example: Arrays, lists.

### O(n^2) - Quadratic Space
- The algorithm's memory usage grows with the square of the input size.
- Example: 2D arrays.

### O(log n) - Logarithmic Space
- The algorithm's memory usage grows logarithmically with input size.
- Example: Binary search tree.

### O(n log n) - Linearithmic Space
- The algorithm's memory usage grows linearly but with a logarithmic factor.
- Example: Merge Sort, Quick Sort (in-place).

### O(2^n) - Exponential Space
- The algorithm's memory usage doubles with each increase in input size.
- Example: Recursive algorithms without memoization.

## Notes
- Big O notation describes the upper bound of an algorithm's performance.
- It helps analyze how algorithms scale with input size.
- Best-case, average-case, and worst-case scenarios may have different Big O complexities.

Remember that this is a simplified cheatsheet. In practice, you may encounter variations and hybrid complexities, and the actual performance of an algorithm can be influenced by various factors. Use this cheatsheet as a starting point for understanding and analyzing time and space complexity.
