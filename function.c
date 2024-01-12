#include<stdio.h>
#include<string.h>

void fun(int p)
{
    printf("%d",p);
}

int main()
{
    int p;
    fun(p);
    scanf("%d",&p);
    return 0;
}