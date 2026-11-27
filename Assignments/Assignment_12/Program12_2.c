#include<stdio.h>
#include<stdlib.h>
int Count2(int iNo)
{
    int iDigit = 0;
   
   
    if(iNo <0)
    {
        iNo =-iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo %10;
        if(iDigit==0)
        {
            return -1;
        }
        iNo = iNo /10;
    }
    return 1;
    
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
    iRet=Count2(iValue);
    if(iRet==-1)
    {
        printf("It contains Zeor\n");
    }
    else 
    {
        printf("It not contains Zeor\n");
    }

    return EXIT_SUCCESS;
}