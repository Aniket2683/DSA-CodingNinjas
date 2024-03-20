/*  Problem statement
You are given an array ‘A’ containing a permutation ‘N’ numbers (0 ≤ A[i] < N). You are also given another array ‘B’ containing a permutation ‘M’ numbers (0 ≤ B[j] < M) and it is also given that N ≤ M.

For each element in array ‘A’ you need to find the first greater element to the right of the element in array ‘B’ that has the same value as the current array A’s element. In other words, for each ‘i’ from 0 to N - 1 in array ‘A’, you need to find an index ‘j’ in array ‘B’ such that A[i] = B[j], now you need to print the element that lies on the right of the j’th index and is also greater than B[j]. Print -1 if there is no greater element.

Follow Up :
Can you solve it in O(N+M) time?
For Example :
If ‘N’ = 6, ‘A’ = {1, 2, 0, 3, 4, 5}, ‘M’ = 7 and ‘B’ = {3, 5, 0, 2, 1, 6, 4}.

Then, we will return {6, 6, 2, 5, -1, 6} because:
For i = 0, A[i] = 1 and the first element greater than 1 that lies to the right of it in array ‘B’ is 6.
For i = 1, A[i] = 2 and the first element greater than 2 that lies to the right of it in array ‘B’ is 6.
For i = 2, A[i] = 0 and the first element greater than 0 that lies to the right of it in array ‘B’ is 2.
For i = 3, A[i] = 3 and the first element greater than 3 that lies to the right of it in array ‘B’ is 5.
For i = 4, A[i] = 4 and there is no greater element to the right of 4 in array ‘B’.
For i = 5, A[i] = 5 and the first element greater than 5 that lies to the right of it in array ‘B’ is 6.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 ≤ T ≤ 10
1 ≤ N ≤ M ≤ 500
0 ≤ A[i] < N
0 ≤ B[i] < M

Time limit: 1 sec
Sample Input 1 :
2
6
1 2 0 3 4 5
7
3 5 0 2 1 6 4
3
0 1 2
3
0 1 2
Sample Output 1 :
6 6 2 5 -1 6
1 2 -1
Explanation For Sample Input 1 :
For test case 1 :
We will print {6, 6, 2, 5, -1, 6} because:
For i = 0, A[i] = 1 and the first element greater than 1 that lies to the right of it in array ‘B’ is 6.
For i = 1, A[i] = 2 and the first element greater than 2 that lies to the right of it in array ‘B’ is 6.
For i = 2, A[i] = 0 and the first element greater than 0 that lies to the right of it in array ‘B’ is 2.
For i = 3, A[i] = 3 and the first element greater than 3 that lies to the right of it in array ‘B’ is 5.
For i = 4, A[i] = 4 and there is no greater element to the right of 4 in array ‘B’.
For i = 5, A[i] = 5 and the first element greater than 5 that lies to the right of it in array ‘B’ is 6.

For test case 2 :
We will print {1, 2, -1} because:
For i = 0, A[i] = 0 and the first element greater than 0 that lies to the right of it in array ‘B’ is 1.
For i = 1, A[i] = 1 and the first element greater than 1 that lies to the right of it in array ‘B’ is 2.
For i = 2, A[i] = 2 and there is no greater element to the right of 2 in array ‘B’.
Sample Input 2 :
2
1
0
1
0
1
0
3
0 2 1
Sample Output 2 :
-1
2  */

#include <bits/stdc++.h>
vector<int> nextGreaterElement(int n, vector<int> A, int m, vector<int> B)
{
    // Write your code here.
    stack<int> st;
    vector<int> nextgreater(B.size());

    for (int i = B.size() - 1; i >= 0; --i)
    {
        while (!st.empty() && st.top() <= B[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            nextgreater[B[i]] = -1;
        }
        else
        {
            nextgreater[B[i]] = st.top();
        }

        st.push(B[i]);
    }
    vector<int> result;
    for (int a : A)
    {
        result.push_back(nextgreater[a]);
    }
    return result;
}
