#include<stdio.h>
int main()
{
    int array1[100],array2[100],n,i;
    printf("How many value you set in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\narray2: ");
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
        printf("%d ", array2[i]);
    }

    return 0;
}

