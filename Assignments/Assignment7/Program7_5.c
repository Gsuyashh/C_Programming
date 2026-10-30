#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo = -iNo)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt<=5;iCnt++)
    {
        printf("%d \n",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}