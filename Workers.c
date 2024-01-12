#include<stdio.h>

int main()
{
    int m1, m2, d;

    scanf("%d %d %d", &m1, &m2, &d);

    int p = (d * m1) / m2;

    printf("%d\n", p);

    return 0;
}