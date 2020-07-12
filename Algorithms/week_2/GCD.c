#include <stdio.h>
int main()
{
    long long int a, b, t, x, gcd;
    scanf("%lld %lld", &a, &b);
    if (a == 0)
        gcd = b;
    else if (b == 0)
        gcd = a;
    else
    {

        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    printf ("%lld\n", gcd);
    return 0;
}
