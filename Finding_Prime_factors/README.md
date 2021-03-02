# Finding Prime Factors using Sieve of Erastosthenes
We can use Sieve of Erastosthenes in order to find all the prime factors to any number.
## Initial conditions.
We generate an array of size n+2 where n=number whose prime factors are to be searched. This array shows minimum prime factor to a number that is initialized as number itself.
## Algorithm.
1. We are iterating from i = 2 to n over all numbers that have minimum prime factor as the number itself. 
2. Now we assign minimum prime factor to all the multiples of i as i whereever we find that minimum prime factor to that number is greater than i.
3. We take a temp variable = n initially and keep on dividing temp with minimum prime factor(temp) as well as printing the minimum prime factor(temp) untill temp!=1;
## Output 
![image](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Finding_Prime_factors/PrimeFactors.png)
