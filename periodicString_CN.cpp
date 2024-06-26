/* Problem statement
Given a string ‘S’ find whether the given string is periodic or not.

A string is said to be periodic if it repeats itself after a certain number of characters and the period of repetition is less than the size of the string.

For example: Let ‘S’ be “ababab” we can clearly see that this string is periodic as ‘ab’ is repeated 3 times to make the string ‘S’.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 50
1<= S.length<=10^5

Where 'S.length' denotes the length of string ‘S’.
The given string consists of lowercase English alphabets only.

Time limit: 1 sec
Sample Input 1:
3
xxxxxx
aabbaaabba
abcba
Sample Output 1:
True
True
False
Explanation of sample input 1 :
Test Case 1:
In the first test case, we can clearly see that the string has a repeating string ‘x’ 6 times. So we return true

Test Case 2:

In the second test case, we can see that the string ‘aabba’ repeats twice to form the given string. Hence we return true,

Test Case 3:

In the third test case, we can see that there is no string which repeats itself to form the given string, hence we return false.
Sample Input 2:
2
vwvnqpnchqik
ubzumubzumubzumubzum
Sample Output 2:
False
True
*/
#include <bits/stdc++.h>
bool isPeriodic(string s)
{
    // Write your code here.
    int n = s.length();

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            string pattern = s.substr(0, i);
            bool pattern_present = true;
            for (int j = i; j < n; j += i)
            {
                if (s.substr(j, i) != pattern)
                {
                    pattern_present = false;
                    break;
                }
            }
            if (pattern_present)
            {
                return true;
            }
        }
    }
    return false;
}