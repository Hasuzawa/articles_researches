## Sum of natural number in C++
Two algorithms to compute 1 + 2 + 3 + ... + n is presented in C++.
One uses simple while loop, another uses recursion.
Of course, we can just use <img src="https://latex.codecogs.com/svg.latex?\sum_{i=1}^{n}i=\frac{n(n+1)}{2}" />
. But for the vast majority of the time, we will not have a definite formula.

It is likely that large n will overflow the sum or recursion stack. They are not for practical usage.
Both algorithm has efficiency O(n) which is obviously much worse than O(1) from the formula.



A simple algorithm for finding the n-th term of fibonacci series is also given.
Do note that the algorithm has no memoization and very inefficient.