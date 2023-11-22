## Introduction

Divide and Conquer is an algorithmic paradigm in which the problem is solved using the Divide, Conquer, and Combine strategy.

A typical Divide and Conquer algorithm solves a problem using following three steps:

- Divide: This involves dividing the problem into smaller sub-problems.
- Conquer: Solve sub-problems by calling recursively until solved.
- Combine: Combine the sub-problems to get the final solution of the whole problem.

[alt text](https://static.javatpoint.com/tutorial/daa/images/divide-and-conquer-introduction.png)

### Fundamental of Divide & Conquer Strategy:

There are two fundamental of Divide & Conquer Strategy:

- Relational Formula
- Stopping Condition

1. Relational Formula: It is the formula that we generate from the given technique. After generation of Formula we apply D&C Strategy, i.e. we break the problem recursively & solve the broken subproblems.

2. Stopping Condition: When we break the problem using Divide & Conquer Strategy, then we need to know that for how much time, we need to apply divide & Conquer. So the condition where the need to stop our recursion steps of D&C is called as Stopping Condition.

### Applications of Divide and Conquer

1. Quicksort is a sorting algorithm. The algorithm picks a pivot element and rearranges the array elements so that all elements smaller than the picked pivot element move to the left side of the pivot, and all greater elements move to the right side. Finally, the algorithm recursively sorts the subarrays on the left and right of the pivot element.

2. Merge Sort is also a sorting algorithm. The algorithm divides the array into two halves, recursively sorts them, and finally merges the two sorted halves.

3. Strassen’s Algorithm is an efficient algorithm to multiply two matrices. A simple method to multiply two matrices needs 3 nested loops and is O(n^3). Strassen’s algorithm multiplies two matrices in O(n^2.8974) time.

### Advantages of Divide and Conquer

- It efficiently uses cache memory without occupying much space because it solves simple subproblems within the cache memory instead of accessing the slower main memory.

- It is more proficient than that of its counterpart Brute Force technique.

- Since these algorithms inhibit parallelism, it does not involve any modification and is handled by systems incorporating parallel processing.

### Disadvantages of Divide and Conquer

- Since most of its algorithms are designed by incorporating recursion, so it necessitates high memory management.

- An explicit stack may overuse the space.

- It may even crash the system if the recursion is performed rigorously greater than the stack present in the CPU.
