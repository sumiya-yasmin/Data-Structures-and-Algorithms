## ⏱️ Time Complexity Speed Comparison

This list is ordered from **Fastest (Best)** to **Slowest (Worst)** performance as the input size ($n$) increases.

| Complexity | Name | Relative Speed | Example |
| :---: | :--- | :--- | :--- |
| **O(1)** | Constant | **Extremely Fast (Best)** | Accessing an element in an array by its index. |
| **O(log n)** | Logarithmic | Very Fast | Binary Search. |
| **O(sqrt(n))** | Square Root | Fast | Checking primality using a trial division up to sqrt(n). |
| **O(n)** | Linear | Good | Traversing an array or Linked List. |
| **O(n log n)** | Log-linear | Moderate | Efficient sorting algorithms like Merge Sort or Quick Sort. |
| **O(n^2)** | Quadratic | Slow | Simple sorting algorithms like Bubble Sort or Insertion Sort. |
| **O(n^3)** | Cubic | Very Slow | Matrix multiplication of two n x n matrices. |
| **O(2^n)** | Exponential | **Extremely Slow (Bad)** | Solving the Traveling Salesperson Problem using brute force. |
| **O(n!)** | **Factorial** | **Worst (Intractable)** | Finding all permutations of an array. |

---

### **Growth Order (Fastest to Slowest):**

O(1) << O(log n) << O(sqrt(n)) << O(n) << O(n log n) << O(n^2) << O(2^n) << O(n!)