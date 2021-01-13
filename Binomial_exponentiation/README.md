# Binary Exponentiation
Binary Exponentiation can be defined as an optimised way of computing exponential calculations.
There was a requirement for an optimistic way since it came out to be computationally expensive when we are dealing with larger values of exponential powers.
## Idea
Suppose we are given a term <b>a<sup>n</sup></b> and we have to compute it.  
n is converted into binary form and then it is being determined that which bits in b are high/set(1).  
if we have n = 10011 as our binary form, high bits are at place 0,1 and 4.  
Hence our term a<sup>n</sup> can also be written as 
a<sup>2<sup>4</sup></sup>\*a<sup>2<sup>1</sup></sup>\*a<sup>2<sup>0</sup></sup>.  
<b>Note that value of i<sup>th</sup> bit is square of (i-1)<sup>th</sup> bit, easing our calculation. </b>  
## Explaination
![Explaination](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Binomial_exponentiation/explaination.PNG)
## Time complexity
if we do normal computation of exponent ie. a<sup>b</sup> = a\*a\*a\*...(n times), our time complexity would be O(n).  
But for this algorithm, we are computing, a<sup>2<sup>0</sup></sup>\*a<sup>2<sup>1</sup></sup>\*a<sup>2<sup>2</sup></sup>...\*a<sup>2<sup>log<sub>2</sub>n</sup></sup>.
Also succeeding multiplier is square of preceeding multiplier, thus easing our calculation.  
Time complexity = <b>O(log<sub>2</sub>n)</b>
## Output
![Output](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Binomial_exponentiation/output.png)
