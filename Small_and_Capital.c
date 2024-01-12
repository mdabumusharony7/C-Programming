#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int small = 0, capital = 0;
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
    }

    printf("%d %d", capital, small);

    return 0;
}