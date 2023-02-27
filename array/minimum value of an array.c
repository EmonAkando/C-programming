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
    int mini=array[0];
    for(i=0;i<n;i++)
    {
        if(mini>array[i])
        {
            mini=array[i];
        }
    }
    printf("The minimum value is= %d", mini);
    return 0;
}

