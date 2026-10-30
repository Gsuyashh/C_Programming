#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        iMulti = iMulti * iCnt;
    }
    return iMulti;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("Factorial of Number is %d \n",iRet);

    return EXIT_SUCCESS;
}