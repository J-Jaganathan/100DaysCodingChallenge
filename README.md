# 100 Days Coding Challenge — Day 1 Complete 🚀

Welcome to my **100 Days Coding Challenge** repository!  
This repo documents my journey solving one algorithmic problem every day, sharpening my problem-solving muscles and preparing for technical interviews.  
Day 1 is done — and here’s what I tackled, how I approached the problems, the mistakes I made, and lessons learned.

---

## Why This Challenge?

- **Build Consistency & Confidence:** Knowing concepts is one thing; applying them daily builds real coding stamina.  
- **Sharpen Problem Patterns:** From brute force to optimized solutions — the journey helps me see patterns faster.  
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

## How to Run The Code

- Each problem is implemented in **C++** inside the `Day1` folder.  
- Files named clearly by problem, e.g., `subArraySumEqualsK.cpp`, `findMissingElement.cpp`, `replaceElementsWithGreatestRightSide.cpp`.

To compile and run a solution:

```bash
g++ Day1/SubarraySumEqualsK.cpp -o subarraysum
./subarraysum
