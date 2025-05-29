#Index of 100 Days Coding Challenge
---
- [Day 1 Summary](https://github.com/J-Jaganathan/100DaysCodingChallenge?tab=readme-ov-file#day-1-problems-overview)
- [Day 8 Summary](https://github.com/J-Jaganathan/100DaysCodingChallenge?tab=readme-ov-file#-100-days-coding-challenge--day-8-complete-)
- [Day 9 Summary](https://github.com/J-Jaganathan/100DaysCodingChallenge?tab=readme-ov-file#-100-days-coding-challenge--day-9-complete-)
- [Day 10 Summary](https://github.com/J-Jaganathan/100DaysCodingChallenge?tab=readme-ov-file#-100-days-coding-challenge--day-10-complete-)
---
# 100 Days Coding Challenge — Day 1 Complete 🚀

Welcome to my **100 Days Coding Challenge** repository!  
This repo documents my journey solving few algorithmic problems every day, sharpening my problem-solving muscles and preparing for technical interviews.  
Day 1 is done and here’s what I tackled, how I approached the problems, the mistakes I made, and lessons learned.

---

## Why This Challenge?

- **Build Consistency & Confidence:** Knowing concepts is one thing; applying them daily builds real coding stamina.  
- **Sharpen Problem Patterns:** From brute force to optimized solutions, the journey helps me see patterns faster.  
- **Prepare for Placements:** Many tech interviews revolve around these core problem types. Mastery here = a strong foundation.

---

## Day 1 Problems Overview

### Problem 1: Subarray Sum Equals K  
**Link:** [LeetCode - Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k)  
**What I learned:** Using prefix sums + hashmap to count subarrays efficiently.  
**Key Insight:** Keep track of cumulative sums and how many times they appear. The difference between current sum and `k` tells if a valid subarray exists.  
**Mistakes:** Initially confused how to handle negative numbers, but hashmap frequency resolved it.  
**Time Complexity:** O(n) | **Space Complexity:** O(n)

---

### Problem 2: Find the Missing Number in an Array  
**Link:** [GeeksforGeeks - Missing Number in Array](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1)  
**What I learned:** Using an `unordered_set` to quickly check missing elements.  
**Key Insight:** Simple linear search through the expected number range after storing elements in a hash set.  
**Mistakes:** Overlooked edge cases like singleton arrays — adding checks fixed it.  
**Time Complexity:** O(n) | **Space Complexity:** O(n)

*Alternative approaches (sum formula, XOR) exist — will explore them in later days.*

---

### Problem 3: Replace Elements with Greatest Element on Right Side  
**Link:** [LeetCode - Replace Elements with Greatest Element on Right Side](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side)  
**What I learned:** Single backward traversal keeps track of max element to the right, avoiding nested loops.  
**Key Insight:** Replace current element with max seen so far, update max on the fly.  
**Mistakes:** Initially tried nested loops — realized it’s inefficient for large inputs.  
**Time Complexity:** O(n) | **Space Complexity:** O(1)

---

# 💯 100 Days Coding Challenge — Day 8 Complete 🚀

Welcome back to the 100 Days Coding Challenge repository!

This repo tracks my daily commitment to sharpening problem-solving skills for interviews and core computer science practice. Day 8 was focused on 2D matrix traversal, DFS applications, and search logic in grid-based problems.

---

## 🔹 Problem 1: Spiral Matrix  
**Link:** [LeetCode - Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)  
**What I learned:** Traversing a matrix layer by layer using four boundaries (top, bottom, left, right).  
**Insight:** Reducing the boundary inwards like peeling an onion helped achieve spiral traversal.  
**Mistake made:** Initially messed up loop conditions — led to out-of-bound access. Rewrote traversal carefully.  
**Time Complexity:** O(m × n)  
**Space Complexity:** O(1) (excluding result array)

---

## 🔹 Problem 2: Search a 2D Matrix  
**Link:** [LeetCode - Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)  
**What I learned:** Can treat a 2D matrix as a 1D sorted array if the last element of each row is less than the first of the next.  
**Insight:** Binary search could be used via index mapping — initially missed this.  
**Mistake made:** Did brute-force row-wise search. Realized afterward this was inefficient — need to refactor with binary search.  
**Time Complexity:** O(m × n) (brute-force)  
**Space Complexity:** O(1)

---

## 🔹 Problem 3: Flood Fill  
**Link:** [LeetCode - Flood Fill](https://leetcode.com/problems/flood-fill/)  
**What I learned:** Classic DFS problem; important to check if already visited or the color doesn't match.  
**Insight:** If the new color is the same as the old, avoid infinite recursion by early return.  
**Mistake made:** Forgot to handle base case for color equality — caused TLE initially. Fixed with a conditional check.  
**Time Complexity:** O(m × n)  
**Space Complexity:** O(m × n) (due to recursion stack)

---

## 🔁 Reflection

This day was all about grid traversal and boundary control.  
Challenging but essential — especially the debugging in recursive cases like flood fill.

---

# 💯 100 Days Coding Challenge — Day 9 Complete 🚀

Another day pushing through!  
This challenge isn't just about solving problems — it's about understanding patterns, handling failures, and building momentum. Day 9 was tough — from combinatorics to prefix logic and array analysis.

---

## 🔹 Problem 1: Count the Number of Inversions (Number of Permutations That Satisfy Constraints)  
**Link:** [LeetCode - Count Special Permutations](https://leetcode.com/problems/count-special-permutations/)  
**What I learned:** Solving combinatorial constraints using recursive DP with memoization.  
**Insight:** Needed to simulate permutations under constraints using a map and a 2D dp array.  
**Mistake made:** Took a long time to interpret the transition logic — referred to a few editorials to understand state compression and recursive buildup.  
**Time Complexity:** O(n²)  
**Space Complexity:** O(n²) (due to DP array)

---

## 🔹 Problem 2: Maximum Difference Between Increasing Elements  
**Link:** [LeetCode - Maximum Difference Between Increasing Elements](https://leetcode.com/problems/maximum-difference-between-increasing-elements/)  
**What I learned:** Tracking minimum seen so far to compute the difference.  
**Insight:** Similar to stock-buy-sell logic — update smallest element and compare difference.  
**Mistake made:** Initially had edge case issues when all elements are decreasing.  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## 🔹 Problem 3: Find Pivot Index  
**Link:** [LeetCode - Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)  
**What I learned:** Prefix sum trick — total sum minus left sum minus current = right sum.  
**Insight:** Careful bookkeeping avoids recalculating sums each iteration.  
**Mistake made:** Overcomplicated at first with multiple passes — reduced it to single pass with clean math.  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## 🔁 Reflection

Day 9 truly tested my mental endurance.  
Especially the permutations problem — took a few hours to analyze and understand before writing it cleanly.  
Some problems needed referring to editorials *after* self-attempts — and that's perfectly valid in the learning curve. The key is to understand and then implement without copy-paste.

---

# 🚀 100 Days Coding Challenge — Day 10 Complete 💯

Welcome to Day 10 of my 100 Days of Code challenge!  
Today's theme: **Linked List Mastery** — tackling structural manipulation, cycle detection, and pointer tricks.

---

## 🧩 Problem 1: Palindrome Linked List  
**Link:** [LeetCode - Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)  
**What I learned:** Reversing the second half of the list and comparing two halves.  
**Insight:** Use slow-fast pointers to find the middle, then reverse and compare.  
**Mistake made:** Initially forgot to restore the list post-check (important in some variations).  
**Time Complexity:** O(n)  
**Space Complexity:** O(1) — after modifying the list in-place

---

## 🧩 Problem 2: Remove N-th Node from End of List  
**Link:** [LeetCode - Remove N-th Node from End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)  
**What I learned:** Two-pointer technique — maintaining a fixed gap.  
**Insight:** Advance first pointer `n` steps ahead, then move both until the first hits null.  
**Mistake made:** Initially failed to handle edge case when head is to be removed.  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## 🧩 Problem 3: Linked List Cycle II  
**Link:** [LeetCode - Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)  
**What I learned:** Floyd’s Cycle Detection algorithm and how to find cycle start.  
**Insight:** After detecting a cycle, reset one pointer to head and move both at the same pace — they meet at the start of the cycle.  
**Mistake made:** Took time to understand the math behind why pointers meet at the start.  
**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## 🌀 Reflections

Today’s problems built strong mental models for navigating linked lists.  
All three required clean pointer manipulation and edge case handling.  
I feel more confident in interview scenarios involving list-based questions.

---

## How to Run The Code

- Each problem is implemented in **C++** inside the `Day1` folder.  
- Files named clearly by problem, e.g., `subArraySumEqualsK.cpp`, `findMissingElement.cpp`, `replaceElementsWithGreatestRightSide.cpp`.

To compile and run a solution:

```bash
g++ Day1/SubarraySumEqualsK.cpp -o subarraysum
./subarraysum
```

Or try to copy the code and run in Online C++ Compiler

## Tech Stack

[![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![GCC](https://img.shields.io/badge/GCC-FFAA00?style=for-the-badge&logo=gnu&logoColor=black)](https://gcc.gnu.org/)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/)
[![C++11](https://img.shields.io/badge/C++11-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/std/the-standard)

