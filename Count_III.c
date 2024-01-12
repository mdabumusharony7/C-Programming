#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    int counts[26] = {0};
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        int serial = s[i] - 'a';
        counts[serial]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a' + i, counts[i]);
    }
    return 0;
}
