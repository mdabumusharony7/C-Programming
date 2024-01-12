#include<stdio.h>
#include<string.h>

int main()
{
    char s[100001];

    fgets(s,100001,stdin);

    int lenS=strlen(s);

    for(int i=0;i<lenS; i++)
    {
        if(s[i]==';')
        {
            s[i]=' ';
        }
    }

    for(int i=0; i<lenS; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }

        else if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);

    return 0;
}
