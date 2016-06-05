#include <cstdio>

void fastscan(int &num)
{
    bool neg = false;
    register int ch;

    num = 0;

    ch = getchar();
    if (ch == '-')
    {
        neg = true;
        ch = getchar();
    }

    for (; (ch > 47 && ch < 58); ch = getchar())
        num = num *10 + ch - 48;

    if (neg)
        num *= -1;
}
