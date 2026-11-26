#include<stdio.h>
#include<stdlib.h>
void RangeDisplay(int iStart,int iEnd)
{
    int icount = 0;
    for(icount=iStart;icount<=iEnd;icount++)
    {
        printf("%d\t",icount);
    }
}
int main()
{
    int iValue1 =0,iValue2 =0;

    printf("Enter Starting Point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}