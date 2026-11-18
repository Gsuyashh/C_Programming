#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    int j = 0;
    int i = 0;
   
    for(i = 4; i>=1; i-- )
    {
        for(j = 1; j <=iCol ; j++ )
        {
            printf("%d\t",i);
        }
        printf("\n");
    }

}

int main ()
{
    int iValue1 =0,iValue2 = 0;

    printf("Enter column : \n");
    scanf("%d",&iValue1);

    printf("Enter Row : \n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}