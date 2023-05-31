/**
 * Author: Evan Bailey
 * License: CC0
 * Description: When minimizing some cost where k operations are allowed, let f(k) be the optimal answer. If f(k) is convex, instead
 *  minimize the cost where k can vary, but there is some possibly negative added cost lambda per operation. Find the minimum lambda
 *  such that the smallest value of k that achieves the minimum is at most the actual value of k from the problem.
 *  (maybe binary search on lambda?) The answer will be the cost this lambda value achieves minus k times lambda. If f is strictly
 *  convex or the problem lets you use fewer than k operations, this minimum will be achieved at a correct k value, so you can
 *  reconstruct the minimizing solution (it's the same as the modified optimization problem's solution).
 * Time: O(\log N)
 */

#pragma once

ll k; // real operation count
ll lo, hi; // bounds on lambda (maybe double)
while (lo < hi) {
	ll lam = (lo + hi) / 2;
	auto [cost, k2] = solve(lam);
	if (k2 > k) lo = lam + 1;
	else ans = cost - (hi = lam) * k;
}