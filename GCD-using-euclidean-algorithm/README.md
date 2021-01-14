# Euclidean algorithm for computing Greatest Common Divisor(GCD).

GCD(Greatest common divisor) of two numbers can be defined as the greatest number that can divide both the other numbers. This algorithm involves usage of recursive calls that makes the implementation quite easy.  

Given two numbers a and b, now x can be defined as GCD of a and b if: 
1. a%x = 0 and b%x = 0 that is, a and b both are divisible by x
2. x = max(all divisors of a and b).  

## Explaination
At each and every recursive call it is being checked first whether b=0 or not.  
b=0 acts as the termination condition for our recursive calls where our function returns value a.  
but if b!=0, then a is being replaced by b and b is being replaced by a%b calculated from previous recursive call.  
Let us find the <b>GCD(32,20)</b>. Following diagram shows the workflow of the function where each line represents a recursive call.
![explaination](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/GCD-using-euclidean-algorithm/working.PNG)  
Thus we get <b>4 as the GCD(32,20)</b>

## Output
![output](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/GCD-using-euclidean-algorithm/output.png)
