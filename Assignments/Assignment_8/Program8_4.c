#include<stdio.h>
#include<stdlib.h>

void Factorial(int iNo)
{
    int iCnt = 0;
     
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=10;iCnt++)
    {
        printf("%d \n",iNo * iCnt);
    }
    
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);
    Factorial(iValue);
    

    return EXIT_SUCCESS;
}