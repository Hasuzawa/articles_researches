## Sum of natural number in C++
Two algorithm to compute 1+2+3+...+n is presented in C++.
One uses simple while loop, another uses recursion.
Of course, we can just use <img src="https://latex.codecogs.com/svg.latex?\sum_{i=1}^{n}i=\frac{n(n+1)}{2}" />
But for most of the time, we will not have a definite formula.

It is likely that large n will overflow the sum or recursion stack. They are not for practical usage.