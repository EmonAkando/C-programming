#include<stdio.h>
int main()
{
    int array[100],n,i;
    printf("How many value  you set in fibonacci series:");
    scanf("%d",&n);

    array[0]=0;
    array[1]=1;
    for(i=2;i<n;i++)
    {
        array[i]=array[i-1]+array[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}

