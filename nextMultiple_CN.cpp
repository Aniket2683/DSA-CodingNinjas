/*
Problem statement
Ninja has two numbers, 'N' and 'M'.



Your task is to return the closest number to 'N' which is greater than 'N' and divisible by 'M'.



Example:
'N' = 9
'M' = 10

The nearest number to '9'(N), which is divisible by '10'(M) is '10'.
So, the answer is '10'.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 10
1 <= N <= 10^9
1 <= M <= 10^9

Time Limit: 1 sec
Sample Input 1:
2
7 3
8 5
Sample Output 1:
9
10
Explanation Of Sample Input 1:
For test case 1:
Here the closest number to '7'(N) which is divisible by '3'(M)  and is also greater than 'N' is '9'.
Hence, we return '9' as our answer.

For test case 2:
Here the closest number to '8'(N) which is divisible by '5'(M) and is also greater than 'N' is '10'.
Hence, we return '10' as our answer.
Sample Input 2:
2
18 17
14 50
Sample Output 2:
34
50  */
int nextMultiple(int n, int m)
{

    // Write your code here.
    int rem = n % m;
    if (rem == 0)
        return rem;
    else
        return n + (m - rem);
}