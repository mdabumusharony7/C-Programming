#include <stdio.h>

int main()
 {
    int n, num;
    int sum_even = 0, sum_odd = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        {
        scanf("%d", &num);

        if (num % 2 == 0)
            {
            sum_even += num;
            }
        else
            {
            sum_odd += num;
            }
    }

    printf("%d %d\n", sum_even, sum_odd);

    return 0;
}
