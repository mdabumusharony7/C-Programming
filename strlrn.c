#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[101];
        scanf("%s", s);
        int lenS = strlen(s);
        if (lenS > 10) {
            printf("%c%d%c\n", s[0], lenS - 2, s[lenS - 1]);
        } else {
            printf("%s\n", s);
        }
    }
    return 0;
}

