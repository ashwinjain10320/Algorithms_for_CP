# Sieve of Eratosthenes
Sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit.  

1. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2. 
2. The multiples of a given prime are generated as a sequence of numbers starting from that prime, with constant difference between them that is equal to that prime.
3. This is the sieve's key distinction from using trial division to sequentially test each candidate number for divisibility by each prime.
4. Once all the multiples of each discovered prime have been marked as composites, the remaining unmarked numbers are primes.
# Algorith Output
![image](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Sieve_of_Eratosthenes/SieveofEratosthenes.png)
