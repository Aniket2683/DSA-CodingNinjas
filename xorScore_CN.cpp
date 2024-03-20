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