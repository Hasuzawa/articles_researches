## Situation
Given a graph of connected nodes, find a path to travel each path exactly once.
The path is called [Eulerian path](https://en.wikipedia.org/wiki/Eulerian_path).

Consider a simple graph:




### Brute force approach
We can brute force solutions, but even if we brute force, we can give a little bit more thought.

From the simple example, we can immediately spot 4 solutions:

1 -> 2 -> 5 -> 3 -> 1 -> 4 -> 5     and its reverse

1 -> 4 -> 5 -> 3 -> 1 -> 2 -> 5     and its reverse

Since the solution must travel each path once. If a solution were to exist, it must be a permutation of all paths.
A path is uniquely defined by the nodes it connect, so a permutation of (no. of path + 1) nodes define the whole path.
For example, a possible candidate solution can be

[1, 4, 3, 2, 1, 3]



### Backtracking
The brute force solution is rather terrible. It requires generating all possible candidates before eliminating them one by one. Instead, we can just start anywhere, go until we can go no more. If we successfully travel every path once, it is a solution, else there is no solution for starting at that node.


### Improved starting points
