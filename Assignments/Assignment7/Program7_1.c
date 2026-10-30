#include<stdio.h>
#include<stdlib.h>
void pattern(int iNo)
{
    int iCnt = 0;
    if(iNo = -iNo)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("$ * ");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);
    pattern(iValue);

    return EXIT_SUCCESS;
}