# Inclusion Exclusion Principle
We are finding total number of objects that satisfies any one condition or both by eliminating common objects that are satisfying both conditions.  
## Problem Statement.
Given an integer n, we need to find total number of multiples in range of 0-n that are multiples of a,b or both a and b.  
## Approach
We find the count of numbers divisible by a by dividing n by and a(let this be c1) and same we did for b(let this be c2).  
Then we find count of numbers that are divisible by both a and b ie. a\*b.(let this be c3)    
Finally we find answer by adding c1 and c2 and subtracting c3 from sum of c1 and c2.  
**Why do we subtract c3?**  
This is because c3 has been counted twice thus we need to remove it for once to get required answer.  
## Output
![image](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Inclusion_Exclusion_Principle/Inclusion_exclusion_principle.png)
