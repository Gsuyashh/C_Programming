#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo = -iNo)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
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