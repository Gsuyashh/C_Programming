#include<stdio.h>
#include<stdlib.h>
int CountLessthan6(int iNo)
{
    int iDigit = 0;
    int isum =0;
   
    if(iNo <0)
    {
        iNo =-iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo %10;
        if(iDigit<6)
        {
            isum = isum +1;
        }
        iNo = iNo /10;
    }
    return isum;
    
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
    iRet=CountLessthan6(iValue);
    
    printf("Frequency is %d",iRet);
    
    

    return EXIT_SUCCESS;
}