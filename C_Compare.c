#include <stdio.h>
#include <string.h>

int main()
{
    char X[100], Y[100];
    scanf("%s%s", X, Y);
    int lenX = strlen(X), lenY = strlen(Y);
    int i;
    for (i = 0; i < lenX && i < lenY; i++)
    {
        if (X[i] < Y[i])
        {
            printf("%s", X);
            return 0;
        }
        else if (Y[i] < X[i])
        {
            printf("%s", Y);
            return 0;
        }
    }
    if (lenX < lenY)
    {
        printf("%s", X);
    }
    else
    {
        printf("%s", Y);
    }
    return 0;
}
