#include<stdio.h>

int main()
{
    int n,value=0,i,j;
    char str[4];

    scanf("%d",&n);
    gets(str);
    for(i=0;i<n;i++){
        gets(str);
        for(j=0;j<3;j++){
            if(str[j]=='+'){
                value++;
                break;
            }
            else if(str[j]=='-'){
                value--;
                break;
            }
        }
    }
    printf("%d",value);
    return 0;
}
