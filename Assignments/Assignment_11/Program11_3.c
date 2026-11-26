#include<stdio.h>
#include<stdlib.h>
int SumRange(int iStart,int iEnd)
{
    int iSum = 0;
    int icount = 0;
    if(iStart<=0 || iEnd <=0 || (iStart>iEnd ))
    {
        return -1;
    }
    else
    {
    for(icount=iStart;icount<=iEnd;icount++)
    {
        iSum = iSum + icount;
    }
    }
    return iSum;
}
int main()
{
    int iValue1 =0,iValue2 =0;
    int iRet =0;

    printf("Enter Starting Point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);
    iRet =SumRange(iValue1,iValue2);
    if(iRet == -1)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Addition is %d",iRet);

    }

    return EXIT_SUCCESS;
}