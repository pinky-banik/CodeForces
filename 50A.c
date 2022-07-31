#include<stdio.h>

int main()
{
    int m,n,sqr,result;
    scanf("%d %d",&m,&n);
    sqr= m*n;
    if(sqr%2!=0)
    {
        sqr= sqr-1;

    }
    result= sqr/2;
    printf("%d\n",result);
    return 0;
}
