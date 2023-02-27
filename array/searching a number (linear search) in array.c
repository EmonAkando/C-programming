#include<stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10},n,i;
    printf("Enter a number what you want search in array:");
    scanf("%d",&n);
    int pos=-1;
    for(i=0;i<10;i++)
    {
        if(n==array[i])
        {
            pos=array[i];
            printf("Number is found and position the number=%d", pos);
            break;
        }
    }
    if(pos==-1)
    {
        printf("The number is not found");
    }

    return 0;
}

