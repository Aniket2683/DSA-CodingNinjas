/*   Problem statement
You are given two numbers, 'A' and 'B' (A <= B).

Now you have to choose two numbers, 'C'(1 <= C <= 'A') and 'D'(1 <= D <= 'B'), such that the score of 'C' and 'D' is greater than the score of 'A' and 'B'.



The score of two integers 'X' and 'Y' is 'X xor Y'.

Return '1' if such a pair of 'C' and 'D' exists. Otherwise, return '0'.



Example:
'A' = 4
'B' = 6

The score of 'A' and 'B' is '4 xor 6 = 2'.

One of the possible values for 'C and 'D', which have more score than 'A' and 'B' is 'C = 3' and 'D = 4' with a score of '3 xor 4 = 7'. And as the score of 'A' and 'B' if less than 'C' and 'D', the answer will be 1.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= 'A' <= 10^5
1 <= 'B' <= 10^5

Time Limit: 1 sec
Sample Input 1:
2
7 9
7 8
Sample Output 1:
1
0
Explanation Of Sample Input 1:
For test case 1:
Score of '7'(A) and '9'(B) is '7 xor 9 = 14'.
One of the possible values for 'C and 'D', which have more score than 'A' and 'B' is 'C = 7' and 'D = 8' with a score of '7 xor 8 = 15'. So the answer will be 1.

For test case 2:
Score of '7'(A) and '8'(B) is '7 xor 8 = 15'.
There are no possible values for 'C' and 'D' which have more score than 'A' and 'B', so the answer will be 0.
Sample Input 2:
2
1 10
35 40
Sample Output 2:
0
1*/

int xorScore(int a, int b)
{
    // Write your code here.
    int score_AB = a ^ b;
    for (int C = 1; C <= a; C++)
    {
        for (int D = 1; D <= b; D++)
        {
            int score_CD = C ^ D;
            if (score_CD > score_AB)
                return 1;
        }
    }
    return 0;
}