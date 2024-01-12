#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int i, cnt = 0;

    scanf("%s", a);

    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a')
        {
            cnt++;
        }
        else if (a[i] == 'e')
        {
            cnt++;
        }
        else if (a[i] == 'i')
        {
            cnt++;
        }
        else if (a[i] == 'o')
        {
            cnt++;
        }

        else if (a[i] == 'u')
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
