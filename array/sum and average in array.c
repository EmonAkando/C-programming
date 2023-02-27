#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0; i<5;i++)
    {
        scanf("%d", &marks[i]);

    }



    int sum=0;
    for(int k=0; k<5;k++)
    {

        sum=sum+marks[k];


    }

    printf("Sum of array =%d \n",sum);
    float average=(float)sum/5;
    printf("Average of array =%.2f",average);

}
