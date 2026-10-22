#include<stdio.h>
#include<stdlib.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    printf("Enter number");
    scanf("%d",&iValue);
    
    bRet = Check(iValue);

    if(bRet == TRUE )
    {
        printf("Devisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return EXIT_SUCCESS;
}