#include<stdio.h>
int main()
{
    int array[100],n,i;
    printf("How many value you set in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    printf("The maximum value is= %d", max);
    return 0;
}
