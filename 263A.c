#include<stdio.h>

int main()
{
    int i,j,x=0,result;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&x);
            if(x==1)
            {
                result =abs(i-2)+abs(j-2);
            }
        }

    }
    printf("%d",result);
    return 0;
}
