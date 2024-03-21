/*  Problem statement
Nowadays ninja develops an interest in gardening. He wants to grow flowers in his garden. So he makes his garden in the form array-like there is an ‘N’ number of slots in the garden. Ninja has grown special flowers that have unique properties like ‘N’ flowers will bloom one by one in N days. On each day, there will be exactly one flower blooming and it will be in the status of blooming since then.

So your task is to return on which day there exists two flowers in the status of blooming, and also the number of flowers between them is K and these flowers are not blooming.

You will be provided with an array of ‘FLOWERS’ consisting of a number from 1 to N. Each number in the array represents the place where the flower will open on that day and an integer ‘K’.

For example, FLOWERS[i] = X means that the unique flower that blooms at day ‘i’ will be at position X, where i and X will be in the range from 1 to N.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
2
3 1
1 3 2
4 1
1 2 3 4
Sample Output 1:
2
-1
Explanation for sample input 1:
Test Case 1:
For the first test case on day 2, the first and third flowers are blooming and there is one flower that is not blooming so we return ‘2’ as our answer.

Test Case 2:
For this test case, the first two flowers are open and next to each other. So for this test case, no day exists for which our required condition satisfies so we return ‘-1’.
Sample Input 2:
1
5 2
1 4 2 3 5
Sample Output 2:
2
Explanation of sample input 2:
For this test case on day 2, the first and fourth flowers are blooming and there are 2 flowers in between them that are not blooming.
  */

#include <bits/stdc++.h>
int ninjaGarden(vector<int> &flowers, int n, int k)
{
    // write your code here
    vector<int> DayOfBloom(n + 1, -1);

    for (int i = 0; i < n; i++)
    {
        DayOfBloom[flowers[i] - 1] = i + 1;
    }
    int left = 0;
    int right = k + 1;
    int ans = n + 1;

    for (int i = 0; right < n; i++)
    {
        if (DayOfBloom[i] < DayOfBloom[left] || DayOfBloom[i] <= DayOfBloom[right])
        {
            if (i == right)
            {
                ans = min(ans, max(DayOfBloom[left], DayOfBloom[right]));
            }
            left = i;
            right = i + k + 1;
        }
    }

    if (ans == n + 1)
    {
        return -1;
    }
    else
    {
        return ans;
    }
}
