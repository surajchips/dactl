/**
 * Author: Evan Bailey
 * License: CC0
 * Source: https://codeforces.com/blog/entry/63823
 * Description: When doing DP, consider cases where $DP[i]$ is a function of $i$ and $\min_{j < i}(f_j(q_i))$, where the $f_j$'s belong to a family of functions where any two intersect at most once (i.e. lines).
 * For any two functions $f$ and $g$ in this family, call $f$ steeper than $g$ if for some $x_0$, $f(x) > g(x)$ for all $x > x_0$.
 * Instead of computing $f_j(i)$ for all $j$ and all $i$, add the $f_j$'s to a data structure and use that structure to evaluate $\min_{j < i}(f_j(q_i))$.
 * If the $f_j$'s are sorted by slope and the $q_i$'s are sorted, this can be done in $O(N)$. Otherwise, this becomes $O(N\log N)$ using a LineContainer or LiChaoTree.
 * Naively, it would be $O(N^2)$.
 * Time: O(N) \text{or} O(N \log N)
 */
