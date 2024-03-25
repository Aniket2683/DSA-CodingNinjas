/*
Problem statement
You are given a 32-bit integer 'N'. At the right of the leftmost set bit, your task is to check if there are no two adjacent bits that are the same.

For Example :
42 is valid because it's binary representation '101010' has no two adjacent bits that are the same.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= N <= 10^9

Time Limit: 1 sec
Sample Input 1:
2
21
31
Sample Output 1:
true
false
Explanation For Sample Input 1:
In example 1, binary representation of 21 is '10101'. Since, no two adjacent bits are the same here, it is valid.
In example 2, binary representation of 31 is ‘11111’. All the digits of binary representation are the same, hence it is not valid.
Sample Input 2:
2
20
85
Sample Output 2:
false
true
Explanation For Sample Input 2:
In example 1, binary representation of 20 is '10100'. Since, the 0-th and 1-st digits of the binary number are the same, it is invalid.
In example 2, binary representation of 85 is ‘1010101’. Since, no two adjacent bits are the same here, it is valid.
*/
#include <bits/stdc++.h>
bool checkBits(unsigned int n)
{
    // Write your code here.
    string binary = bitset<32>(n).to_string();
    size_t leftmostBit = binary.find("1");

    for (size_t i = leftmostBit; i < 31; ++i)
    {
        if (binary[i] == binary[i + 1])
        {
            return false;
        }
    }
    return true;
}