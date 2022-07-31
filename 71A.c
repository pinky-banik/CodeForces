#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str);
        int sz = strlen(str);
        if(sz>10){
            printf("%c%d%c\n",str[0],sz-2,str[sz-1]);
        }
        else
        {
            printf("%s",str);
        }
    }
    return 0;
}
